#this will be the context of the strategy pattern, it will use the discount strategy to calculate the discount for a given price
from abc import ABC, abstractmethod

class DiscountStrategy(ABC):
    @abstractmethod
    def calculate_discount(self):
        pass