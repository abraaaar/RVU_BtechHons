from django.urls import path
from . import views

urlpatterns = [
    path('', views.dashboard, name='dashboard'),
    path('live_feed/', views.live_feed, name='live_feed'),  # ✅ added
]
