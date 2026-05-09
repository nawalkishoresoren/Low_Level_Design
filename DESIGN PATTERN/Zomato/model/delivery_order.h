#include<iostream>
#include "order.h"
using namespace std;

class DeliveryOrder: public Order{
    private:
    string user_address;

    public:
    DeliveryOrder()
    {
        user_address ="";
    }

    void set_useraddress(string new_useraddress)
    {
        user_address = new_useraddress;
    }
    string get_useraddress()
    {
        return user_address;
    }
    string getType() override
    {
        return "Delivery";
    }
};