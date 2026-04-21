from account import BankAccount

class FDAccount(BankAccount):
    def __init__(self, balance):
        super().__init__(balance)

    def deposit(self, amount):
        self.balance += amount
        print(f"Deposited {amount}. New balance: {self.balance}")

    # No withdraw method, as withdrawals are not allowed from a Fixed Deposit Account