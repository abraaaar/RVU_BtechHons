import ctypes
import time

# Constants for mouse events
MOUSEEVENTF_LEFTDOWN = 0x0002
MOUSEEVENTF_LEFTUP = 0x0004

# Get user32.dll
user32 = ctypes.WinDLL('user32', use_last_error=True)

# Function to click mouse at current position
def click():
    user32.mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0)
    user32.mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0)

print("Starting in 5 seconds...")
time.sleep(5)

end_time = time.time() + 30  # 1 minute duration

print("Clicking started!")

while time.time() < end_time:
    click()

print("Clicking stopped.")
