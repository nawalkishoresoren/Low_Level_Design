#include<iostream>
#include<vector>
#include "restaurant.h"
#include "user.h"
#include "menu_item.h"

using namespace std;

class Order{
    private:
    static int global_order_id;
    int order_ID;
    Restaurant* restaurat;
    vector<MenuItem>order_items;
    User* user;
    Payment* payment_strategy;
    int total;
    string scheduled;

    public:
    Order()
    {
        order_ID  = ++global_order_id;
        restaurat = nullptr;
        vector<MenuItem>order_items;
        user = nullptr;
        payment_strategy = nullptr;
        total = 0;
        scheduled = "";
    }

    //User getter and setter
    int get_orderID()
    {
        return order_ID;
    }
    void set_OrderID(int new_orderID)
    {
        order_ID = new_orderID;
    }

    //Restaurant getter and setter
    Restaurant* get_restaurant()
    {
        return restaurat;
    }
    void set_restaurant(Restaurant* new_restaurant)
    {
        restaurat = new_restaurant;
    }

    //User getter and setter
    User* get_user()
    {
        return user;
    }
    void set_user(User* new_user)
    {
        user = new_user;
    }

    bool process_payment()
    {
        if(payment_strategy)
        {
            payment_strategy->pay(total);
            return true;
        }
        else{
            cout<<"Please choose a payment mode"<<endl;
        }
        return false;
    }

    int get_order_total()
    {
        return total;
    }
    int get_order_ID()
    {
        return order_ID;
    }
    
    string get_scheduler()
    {
        return scheduled;
    }
    virtual string getType() = 0;
};
int Order::global_order_id = 0;