class User():
    def __init__(self,name:str,age:int,email:str):
        self.name: str = name
        self.age: int = age
        self.email: str = email
    
    def get_user_info(self):
        print(f"This is Name: {self.name}, Age: {self.age}, Email: {self.email}")

    def is_adult(self)->bool:
        if self.age >= 18:
            print(f"{self.name} is an adult.")
            return True
        else:
            print(f"{self.name} is not an adult.")
            return False
    
    def save_to_database(self):
        # This is a placeholder for the actual database saving logic.
        print(f"Saving {self.name}'s information to the database.")

    def delete_from_database(self):
        # This is a placeholder for the actual database deletion logic.
        print(f"Deleting {self.name}'s information from the database.")