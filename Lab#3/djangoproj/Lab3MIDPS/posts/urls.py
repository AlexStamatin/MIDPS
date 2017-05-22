from django.conf.urls import url
from django.contrib import admin

from . import views

urlpatterns = [
	    url(r'^Anime/$', Anime, name='Anime'),
	    url(r'^Animals/$', Animals, name='Animals'),
	    url(r'^search/$', search, name='search')
	    	  ]