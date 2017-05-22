"""Lab3MIDPS URL Configuration

The `urlpatterns` list routes URLs to views. For more information please see:
    https://docs.djangoproject.com/en/1.11/topics/http/urls/
Examples:
Function views
    1. Add an import:  from my_app import views
    2. Add a URL to urlpatterns:  url(r'^$', views.home, name='home')
Class-based views
    1. Add an import:  from other_app.views import Home
    2. Add a URL to urlpatterns:  url(r'^$', Home.as_view(), name='home')
Including another URLconf
    1. Import the include() function: from django.conf.urls import url, include
    2. Add a URL to urlpatterns:  url(r'^blog/', include('blog.urls'))
"""
import registration
from django.conf.urls import include, url
from django.contrib import admin
from newsletter.views import contact, home
from Lab3MIDPS.views import about
from posts.views import Anime
from posts.views import Animals
from posts.views import Cities
from posts.views import Cars
from posts.views import Flowers
from posts.views import Food
from posts.views import Nature
from django.conf import settings
from django.conf.urls.static import static

urlpatterns = [
    url(r'^$', home, name='home'),
    url(r'^contact/$', contact, name='contact'),
    url(r'^about/$', about, name='about'),
    url(r'^Anime/$', Anime, name='Anime'),
    url(r'^Animals/$', Animals, name='Animals'),
    url(r'^Cars/$', Cars, name='Cars'),
    url(r'^Cities/$', Cities, name='Cities'),
    url(r'^Flowers/$', Flowers, name='Flowers'),
    url(r'^Nature/$', Nature, name='Nature'),
    url(r'^Food/$', Food, name='Food'),
    url(r'^admin/', admin.site.urls),
    url(r'^accounts/', include('registration.backends.default.urls')),
] 

if settings.DEBUG:
    urlpatterns += static(settings.STATIC_URL, document_root = settings.STATIC_ROOT)
    urlpatterns += static(settings.MEDIA_URL, document_root = settings.MEDIA_ROOT)

	# static(settings.MEDIA_URL, document_root = settings.MEDIA_ROOT)

