class Student:
    def __init__(self,name:str,age:int,gender:str):
        print("This is a constructor method, it is called when an object is created.")
        self.name = name
        self.age = age
        self.gender = gender

    def display(self) -> None:
        print(f"My name is {self.name}, I am {self.age} years old and I am a {self.gender}.")

    def get_age(self) -> int:
        return self.age

s1 = Student("Nawal", 20, "Male")

s1.display()
print(f"{s1.name}'s age is {s1.get_age()}")
