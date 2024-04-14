from django.shortcuts import render
from django.http import HttpResponse
# Create your views here.

def say_hello(request):
    x= 23
    y = 32
    return render(request, 'Hello.html', {'name': 'Abrar'})

