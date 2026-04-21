from notification_channel import NotificationChannel
from sms_service import SMSService
from email_service import EmailService

class NotificationService():
    def __init__(self,channel:NotificationChannel):
        self.channel = channel

    def notify(self, message):
        self.channel.send(message)
    
if __name__ == "__main__":
    sms_service = SMSService()
    ns = NotificationService(sms_service)
    ns.notify("Hello via SMS!")