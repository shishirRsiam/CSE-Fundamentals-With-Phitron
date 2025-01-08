from django.contrib import admin
from django.urls import path, include
from . import views

urlpatterns = [
    path('', views.home),
    path('home/', views.home),
    path('contact/', views.contact),
    path('about/', views.about),
    path('info/', views.info),
]
