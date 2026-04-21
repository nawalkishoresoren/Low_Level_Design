from notification_channel import NotificationChannel

class SMSService(NotificationChannel):
    def send(self, message:str):
        print(f"Sending SMS with message: {message}")