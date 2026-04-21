from account import BankAccount
from fd_account import FDAccount
from withdraw import WithdrawalAccount
from savings_account import SavingsAccount

s = SavingsAccount(1000)
s.deposit(500)
s.withdraw(200)

fd = FDAccount(5000)
fd.deposit(1000)
# fd.withdraw(2000)  # This will not raise an exception because the withdraw method is not defined in FDAccount, adhering to the Liskov Substitution Principle