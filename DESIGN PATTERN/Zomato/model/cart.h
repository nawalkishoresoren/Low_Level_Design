#include<iostream>
#include "restaurant.h"
#include "menu_item.h"

using namespace std;

class Cart{
    private:
    Restaurant* restaurant;
    vector<MenuItem>cart_items;
    int total;

    public:
    Cart()
    {
        cout<<"Constructor for cart called"<<endl;
    }

    void add_to_cart(MenuItem food_item)
    {
        if(!restaurant)
        {
            cout<<"Select a restaurant beforing adding to items to cart"<<endl;   
        }
        cart_items.push_back(food_item);
    }

    int get_total_price()
    {
        int total_cost = 0;
        for(auto item:cart_items)
        {
            int item_price = item.get_price();
            total_cost += item_price;

        }
        return total_cost;
    }
};