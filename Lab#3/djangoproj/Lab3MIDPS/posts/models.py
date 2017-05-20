from django.db import models

# Create your models here.

class Post(models.Model):
	title = models.CharField(max_length=120)
	timestamp = models.DateTimeField(auto_now=False, auto_now_add=True)
	image = models.FileField(null=True, blank=True)
	category = models.CharField(max_length=120, blank=True)

	def __str__(self):
		return self.title