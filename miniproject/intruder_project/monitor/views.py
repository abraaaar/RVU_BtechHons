from django.shortcuts import render
from .models import Alert
from .detection import start_monitoring

# Start detection once when server starts
monitor_started = False

def dashboard(request):
    global monitor_started
    if not monitor_started:
        start_monitoring()
        monitor_started = True

    alerts = Alert.objects.order_by('-timestamp')
    return render(request, 'monitor/dashboard.html', {'alerts': alerts})
