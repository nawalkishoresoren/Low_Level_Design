from payment_methods import PaymentMethod, UPIPayment, CreditCardPayment, PayPalPayment

class PaymentProcessor():
    def pay(self, payment_method: PaymentMethod, amount):
        payment_method.pay(amount)
    


upi_payment = UPIPayment()
credit_card_payment = CreditCardPayment()
paypal_payment = PayPalPayment()


payment_processor = PaymentProcessor()


payment_processor.pay(credit_card_payment, 100)

# This follows the Open/Closed Principle because we can add new payment methods by creating new classes that inherit from the PaymentMethod interface
# without modifying the existing code in the PaymentProcessor class. 
# For example, if we want to add support for Apple Pay, 
# we can simply create a new class that implements the PaymentMethod interface and implement the pay method without changing any existing code.