from django.http import HttpRequest, HttpResponse

def home(request):
    return HttpResponse("Hello this is home page.")