from django.shortcuts import render
from django.http import StreamingHttpResponse
from .models import Alert
from .detection import start_monitoring
import cv2

monitor_started = False

# Initialize video capture globally for streaming
# cap = cv2.VideoCapture(0)

def dashboard(request):
    global monitor_started
    if not monitor_started:
        start_monitoring()
        monitor_started = True

    alerts = Alert.objects.order_by('-timestamp')
    return render(request, 'monitor/dashboard.html', {'alerts': alerts})

# Frame generator for live feed
def gen_frames():
    cap = cv2.VideoCapture(0)
    while True:
        success, frame = cap.read()
        if not success:
            break

        ret, buffer = cv2.imencode('.jpg', frame)
        frame = buffer.tobytes()

        # Proper multipart stream response
        yield (b'--frame\r\n'
               b'Content-Type: image/jpeg\r\n\r\n' + frame + b'\r\n')

# Live feed view
def live_feed(request):
    return StreamingHttpResponse(gen_frames(), content_type='multipart/x-mixed-replace; boundary=frame')
