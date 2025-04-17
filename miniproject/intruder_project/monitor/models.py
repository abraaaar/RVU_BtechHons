from django.db import models

class Alert(models.Model):
    timestamp = models.DateTimeField(auto_now_add=True)
    label = models.CharField(max_length=100)
    image = models.ImageField(upload_to='alerts/')

    def __str__(self):
        return f"{self.timestamp} - {self.label}"
