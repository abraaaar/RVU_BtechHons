from django.urls import path
from . import views
urlpatterns = [
  path('wow/', views.say_hello)
]
