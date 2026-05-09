#include<iostream>
#include "order.h"
using namespace std;

class PickupOrder: public Order{
    private:
    string restaurant_address;

    public:
    PickupOrder()
    {
        restaurant_address ="";
    }

    void set_restaurant_address(string new_restaurant_address)
    {
        restaurant_address = new_restaurant_address;
    }
    string get_restaurant_address()
    {
        return restaurant_address;
    }
    string getType() override
    {
        return "Pickup";
    }
};