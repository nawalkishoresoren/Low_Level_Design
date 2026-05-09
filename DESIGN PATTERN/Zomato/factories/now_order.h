#include "order_factory.h"

#include "../model/delivery_order.h"
#include "../model/pickup_order.h"
#include "../utils/time_utils.h"

using namespace std;

class NowOrderFactory : public OrderFactory {
public:
    Order* create_order(User* user, Cart* cart, Restaurant* restaurant, const vector<MenuItem>& menuItems,
                       PaymentStrategy* paymentStrategy, double totalCost, const string& orderType) override {
        Order* order = nullptr;
        if (orderType == "Delivery") {
            auto deliveryOrder = new DeliveryOrder();
            deliveryOrder->set_useraddress(user->get_user_address());
            order = deliveryOrder;
        }
        else {
            auto pickupOrder = new PickupOrder();
            pickupOrder->set_restaurant_address(restaurant->get_restaurant_address());
            order = pickupOrder;
        }
        order->set_user(user);
        order->set_restaurant(restaurant);
        order->setItems(menuItems);
        order->setPaymentStrategy(paymentStrategy);
        order->setScheduled(TimeUtils::getCurrentTime());
        order->setTotal(totalCost);
        return order;
    }
};
