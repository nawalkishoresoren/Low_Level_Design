from notification_channel import NotificationChannel

class EmailService(NotificationChannel):
    def send(self, message:str):
        print(f"Sending email with message: {message}")

