class Animal():
    def __init__(self, name:str, age:int):
        self.name = name
        self.age = age

    def eat(self):
        print("I am eating")

    def sleep(self):
        print("I am sleeping")

class Dog(Animal):
    #Dog inherits all the properties and methods of the Animal class.
    #Dog can have name and age properties and can eat and sleep methods.
    def __init__(self, name:str, age:int, breed:str):
        super().__init__(name, age) # Call the constructor of the parent class (Animal)
        self.breed = breed # Dog has an additional property called breed
        
    def bark(self):
        print("I am barking")
    
    def display_info(self):
        print(f"My name is {self.name}, I am {self.age} years old, and I am a {self.breed}.")
    
class Cat(Animal):
    #Cat also inherits all the properties and methods of the Animal class.
    #Cat can have name and age properties and can eat and sleep methods.
    def meow(self):
        print("I am meowing")

    def display_info(self):
        print(f"My name is {self.name}, I am {self.age} years old, and I am a {self.breed}.")
    
dog = Dog("Buddy", 3, "Golden Retriever")
dog.bark() # Output: I am barking
dog.eat() # Output: I am eating
dog.sleep() # Output: I am sleeping
dog.display_info() # Output: My name is Buddy and I am 3 years old.

cat = Cat("Whiskers", 2)
cat.meow() # Output: I am meowing
cat.eat() # Output: I am eating
cat.sleep() # Output: I am sleeping
cat.display_info() # Output: My name is Whiskers and I am 2 years old.