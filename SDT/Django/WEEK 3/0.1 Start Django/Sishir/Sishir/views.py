from django.shortcuts import render
from django.http import HttpRequest, HttpResponse

def home(request):
    # return HttpResponse("Hello from Main Projects Sishir.")
    return render(request, 'index.html')