from django.contrib import admin

# Register your models here.
from .models import Post

class PostModelAdmin(admin.ModelAdmin):
	list_display = ["title","timestamp"]
	liat_ediatble = ["title"]
	list_filter = ["timestamp"]
	class Meta:
		model=Post

admin.site.register(Post, PostModelAdmin)