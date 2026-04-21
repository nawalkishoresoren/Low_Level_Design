from discount_service import DiscountService
from diwali_discount import DiwaliDiscount
from holi_discount import HoliDiscount

ds = DiscountService(DiwaliDiscount())
ds.apply_discount()

# ds.set_strategy(HoliDiscount())
# ds.apply_discount()

