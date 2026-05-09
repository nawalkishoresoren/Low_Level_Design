#include "../model/order.h"
#include "../model/cart.h"
#include "../model/restaurant.h"
// #include "../strategies/payment_strategy.h"
#include <vector>
#include<string>


using namespace std;

class OrderFactory{
    public:
    virtual Order* create_order(
                                    User* user,
                                    Cart* cart,
                                    Restaurant* restaurant,
                                    const vector<MenuItem>& menuitems,
                                    PaymentStrategy* paymentstrategy,
                                    double totalCost,
                                    const string& ordertype
                                ) = 0;
    virtual ~OrderFactory(){};
};