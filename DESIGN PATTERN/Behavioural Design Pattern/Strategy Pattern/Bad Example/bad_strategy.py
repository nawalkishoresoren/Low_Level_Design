class DiscountService:

    def calculate_discount(self, discount_type:str):
        if discount_type == "diwali":
            print(f"Applying Diwali Discount.")
        elif discount_type == "holi":
            print(f"Applying Holi Discount.")


ds = DiscountService()
ds.calculate_discount("diwali")

#Too many responsibilities, as it check discount type and also calculate the discount thus voilates SRP(Single Responsibility Principle )
#Also if we want to add new discount type then we need to modify the calculate_discount method which voilates OCP(Open Closed Principle)