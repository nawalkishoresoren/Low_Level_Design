#to create an abstract call always import thr below module
from abc import ABC, abstractmethod

class Shape(ABC):
    @abstractmethod
    def area(self):
        pass

    @abstractmethod
    def perimeter(self):
        pass

# This will raise an error because we cannot create an instance of an abstract class.
# s = Shape() 



#Creating a concrete class that inherits from the abstract class and implements the abstract methods.
class Rectangle(Shape):
    def __init__(self, length:int, breadth:int):
        self.length = length
        self.breadth = breadth

    def area(self):
        return self.length * self.breadth

    def perimeter(self):
        return 2 * (self.length + self.breadth)

r = Rectangle(5, 3)
print(f"Area of the rectangle is {r.area()}") # Output: Area of the