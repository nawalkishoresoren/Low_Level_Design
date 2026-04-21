from account import BankAccount
from abc import ABC, abstractmethod

class WithdrawalAccount(BankAccount):
    def __init__(self, balance):
        super().__init__(balance)

    @abstractmethod
    def withdraw(self, amount):
        if amount > self.balance:
            print("Insufficient funds")
        else:
            self.balance -= amount
            print(f"Withdrew {amount}. New balance: {self.balance}")