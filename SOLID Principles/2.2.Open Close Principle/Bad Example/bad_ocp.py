class PaymentProcessor():
    def pay(self, payment_method, amount):
        if payment_method == 'credit_card':
            print('Processing credit card payment of ${}'.format(amount))
        elif payment_method == 'paypal':
            print('Processing PayPal payment of ${}'.format(amount))
        else:
            raise ValueError('Unsupported payment method')
    
payment = PaymentProcessor()
payment.pay('credit_card', 100)

#In order to add a new payment method, we would need to modify the existing code, which violates the Open/Closed Principle. 
# For example, if we want to add support for Apple Pay, we would need to add another condition
# in the pay method, which would require changing the existing code and potentially introducing bugs.