from abc import ABC, abstractmethod

class PaymentMethod(ABC):
    @abstractmethod
    def pay(self, amount):
        pass

class UPIPayment(PaymentMethod):
    def pay(self, amount):
        print('Processing UPI payment of ${}'.format(amount))
    
class CreditCardPayment(PaymentMethod):
    def pay(self, amount):
        print('Processing credit card payment of ${}'.format(amount))
    
class PayPalPayment(PaymentMethod):
    def pay(self, amount):
        print('Processing PayPal payment of ${}'.format(amount))    