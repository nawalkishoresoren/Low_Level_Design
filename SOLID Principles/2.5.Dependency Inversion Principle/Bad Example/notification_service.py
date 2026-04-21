from email_service import EmailService
from sms_service import SMSService
    


class NotificationService:
    def __init__(self):
        self.email_service = EmailService()
        self.sms_service = SMSService()
            
    def send_notification_by_email(self, message:str):
        self.email_service.send_email(message)
    
    def send_notification_by_sms(self, message:str):
        self.sms_service.send_sms(message)

ns = NotificationService()
ns.send_notification_by_email("Hello via Email!")  
ns.send_notification_by_sms("Hello via SMS!")  


##Tightly coupled code, if we want to change the way notifications are sent, we need to modify the NotificationService class, 
# which violates the Dependency Inversion Principle. 
# The NotificationService class is dependent on the concrete implementations of EmailService and SMSService,