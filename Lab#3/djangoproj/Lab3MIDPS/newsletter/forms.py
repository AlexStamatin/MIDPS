from django import forms

from .models import SignUp

class ContactForm(forms.Form):
	name = forms.CharField()
	email = forms.EmailField()
	message = forms.CharField()



class SignUpForm(forms.ModelForm):
	class Meta:
		model = SignUp
		fields = ['name','email']

	def clean_email(self):
		email = self.cleaned_data.get('email')
		#
		return email

	def clean_name(self):
		name = self.cleaned_data.get('name')
		#
		return name