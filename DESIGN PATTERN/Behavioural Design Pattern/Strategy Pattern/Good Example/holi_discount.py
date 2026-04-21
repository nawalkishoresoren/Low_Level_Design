from discount_strategy import DiscountStrategy

class HoliDiscount(DiscountStrategy):
    def calculate_discount(self):
        print(f"Applying Holi Discount.")