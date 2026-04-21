from abc import ABC, abstractmethod

class BankAccount(ABC):
    def __init__(self, balance):
        self.balance = balance

    @abstractmethod
    def deposit(self, amount):
        pass

    @abstractmethod
    def withdraw(self, amount):
        pass

class SavingsAccount(BankAccount):
    def __init__(self,balance):
        super().__init__(balance)
    
    def deposit(self, amount):
        self.balance += amount
        print(f"Deposited {amount}. New balance: {self.balance}")
    
    def withdraw(self, amount):
        if amount > self.balance:
            print("Insufficient funds")
        else:
            self.balance -= amount
            print(f"Withdrew {amount}. New balance: {self.balance}")
        
class FDAccount(BankAccount):
    def __init__(self,balance):
        super().__init__(balance)
    
    def deposit(self, amount):
        self.balance += amount
        print(f"Deposited {amount}. New balance: {self.balance}")
    
    def withdraw(self, amount):
        raise Exception("Withdrawals are not allowed from a Fixed Deposit Account")

if __name__ == "__main__":
    s = SavingsAccount(1000)
    s.deposit(500)
    s.withdraw(200)

    fd= FDAccount(5000)
    fd.deposit(1000)
    fd.withdraw(2000)  # This will raise an exception because withdrawals are not allowed from a Fixed Deposit Account
    