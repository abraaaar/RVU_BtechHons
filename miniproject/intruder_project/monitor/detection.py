import cv2
import os
from datetime import datetime
from ultralytics import YOLO
from .models import Alert
from django.conf import settings
from django.core.files import File
import threading

# Load YOLO model
model = YOLO("yolov8n.pt")

# List of dangerous objects
DANGEROUS_OBJECTS = ["knife", "scissors"]

# Flag to prevent multiple alerts per second
cooldown_seconds = 5
last_detection_time = None

def monitor_camera():
    global last_detection_time

    cap = cv2.VideoCapture(0)

    if not cap.isOpened():
        print("Cannot open webcam.")
        return

    while True:
        ret, frame = cap.read()
        if not ret:
            break

        results = model(frame)[0]

        for box in results.boxes:
            class_id = int(box.cls[0])
            label = model.names[class_id]

            if label in DANGEROUS_OBJECTS:
                now = datetime.now()

                if not last_detection_time or (now - last_detection_time).total_seconds() > cooldown_seconds:
                    last_detection_time = now

                    # Save image
                    filename = f"{label}_{now.strftime('%Y%m%d_%H%M%S')}.jpg"
                    filepath = os.path.join(settings.MEDIA_ROOT, 'alerts', filename)
                    os.makedirs(os.path.dirname(filepath), exist_ok=True)
                    cv2.imwrite(filepath, frame)

                    # Save alert to DB
                    with open(filepath, 'rb') as f:
                        alert = Alert(label=label)
                        alert.image.save(filename, File(f), save=True)

        # Optional: show live feed in a small window (optional)
        # cv2.imshow("Live Monitoring", frame)
        # if cv2.waitKey(1) & 0xFF == ord('q'):
        #     break

    cap.release()
    cv2.destroyAllWindows()

def start_monitoring():
    t = threading.Thread(target=monitor_camera, daemon=True)
    t.start()
