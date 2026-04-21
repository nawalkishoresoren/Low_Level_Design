class Bank():
    def __init__(self,name:str, balance:int):
        self.name = name
        self.__balance = balance
    
    def get_balance(self):
        print(f"Current balance is {self.__balance}.")

    def set_balance(self, balance:int):
        self.__balance = balance
        print(f"Balance updated to {self.__balance}.")


    def __is_Server_Live(self):
        """
        This is a private method that checks if the server is live.
        It is not accessible from outside the class.
        In a real-world application, this method would contain logic to check the server status.
        For this example, we will assume that the server is always live.
        """
        return True

    def deposit(self, amount:int):
        if self.__is_Server_Live() == True:
            self.__balance += amount
            print(f"Deposited {amount}. New balance is {self.__balance}.\n")
        else:
            print("Server is down. Please try again later.\n")
    
    def withdraw(self, amount:int):
        if amount > self.__balance:
            print("Insufficient balance.")
        else:
            self.__balance -= amount
            print(f"Withdrew {amount}. New balance is {self.__balance}.\n")

acc =  Bank("Nawal", 1000)
acc.deposit(500) # Output: Deposited 500. New balance is 1500.


# Encapsulation is the concept of hiding the internal state and behavior of an object and only exposing a public interface. 
# In this example, the balance property is private (indicated by the double underscore) and can only be accessed and modified through the deposit and withdraw methods. 
# This helps to protect the integrity of the balance and prevents unauthorized access or modification.

# acc.__balance = 2000 # Directly modifying the balance property (not recommended)
# print(f"New balance is {acc.__balance}.\n")


acc.withdraw(200) # Output: Withdrew 200. New balance is 1300.


#How to print balance we use getter method
acc.get_balance()

#Check server status (private method)
acc.__is_Server_Live() # This will raise an error because it is a private method and cannot be accessed from outside the class.