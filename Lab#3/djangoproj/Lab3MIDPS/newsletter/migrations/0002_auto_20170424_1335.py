# -*- coding: utf-8 -*-
# Generated by Django 1.11 on 2017-04-24 10:35
from __future__ import unicode_literals

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('newsletter', '0001_initial'),
    ]

    operations = [
        migrations.AlterField(
            model_name='signup',
            name='name',
            field=models.CharField(max_length=120, null=True),
        ),
    ]
