from django.shortcuts import render
from django.http import HttpResponse
from .models import Post
# Create your views here.
def Anime(request):
	queryset = Post.objects.all()
	context = {
		"object_list":queryset,
		"title":"List"
	}
	return render(request,"Anime.html", context)
def Animals(request):
	queryset = Post.objects.all()
	context = {
		"object_list":queryset,
		"title":"List"
	}
	return render(request,"Animals.html", context)
