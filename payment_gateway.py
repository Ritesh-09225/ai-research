from abc import ABC, abstractmethod

class PaymentGateway(ABC):

    @abstractmethod
    def pay(self, amount):
        pass

class StripeGateway(PaymentGateway):

    def pay(self, amount):
        print(f"Paid ₹{amount} using Stripe")

class RazorpayGateway(PaymentGateway):

    def pay(self, amount):
        print(f"Paid ₹{amount} using Razorpay")

gateway = RazorpayGateway()
gateway.pay(500)

gateway = StripeGateway()
gateway.pay(500)

