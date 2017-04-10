from django.shortcuts import render
from django.core.mail import send_mail
from django.conf import settings
from .forms import ContactForm, SignUpForm
# Create your views here.

def home(request):
	title = "Poppy"
	form = SignUpForm(request.POST or None)

	context = {
	    "title": title,
	    "form":form
	}

	if form.is_valid():
		form.save()
		context = {
			"title": "Thank You"
		}


	return render(request,"home.html", context)

def contact(request):
	form = ContactForm(request.POST or None)
	if form.is_valid():
		form_email = form.cleaned_data.get("email")
		form_message = form.cleaned_data.get("message")
		form_name = form.cleaned_data.get("name")
		subject = 'Site contact form'
		from_email = settings.EMAIL_HOST_USER
		to_email = [from_email]
		contact_message = "%s: %s via %s"%(form_name, form_message, form_email)
		send_mail(subject,
		 		contact_message,
				from_email,
		 		to_email,
		 		 fail_silently=False)
	context={
	"form":form,
	}

	return render(request, "forms.html", context)
