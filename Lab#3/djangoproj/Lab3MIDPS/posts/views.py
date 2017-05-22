from django.shortcuts import render
from django.http import HttpResponse
from django.views.generic import RedirectView
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

def Cars(request):
	queryset = Post.objects.all()
	context = {
		"object_list":queryset,
		"title":"List"
	}
	return render(request,"Cars.html", context)

def Cities(request):
	queryset = Post.objects.all()
	context = {
		"object_list":queryset,
		"title":"List"
	}
	return render(request,"Cities.html", context)

def Flowers(request):
	queryset = Post.objects.all()
	context = {
		"object_list":queryset,
		"title":"List"
	}
	return render(request,"Flowers.html", context)

def Food(request):
	queryset = Post.objects.all()
	context = {
		"object_list":queryset,
		"title":"List"
	}
	return render(request,"Food.html", context)

def Nature(request):
	queryset = Post.objects.all()
	context = {
		"object_list":queryset,
		"title":"List"
	}
	return render(request,"Nature.html", context)

def search(request):
	if request.method == "POST":
		search_text = request.POST.get['search_text',False]
	else:
		search_text=''

	sposts = Post.objects.filter(title_contains=search_text)

	return render(request,'ajax_search.html',{'sposts':sposts})

