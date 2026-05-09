#include<iostream>
#include<vector>
#include "../model/order.h"

using namespace std;

//Singleton class
class OrderManager{
    private:
    static OrderManager* instance;
    
    vector<Order*>order_list;
    

    OrderManager()
    {
        cout<<"Called private constructor"<<endl;
        
    }
    public:

    OrderManager* get_instance()
    {
        if(!instance)
        {
            instance = new OrderManager();
        }
        return instance;
    }

    void add_order(Order* new_order)
    {
        order_list.push_back(new_order);
    }
    
    void list_orders() {
        cout << "\n--- All Orders ---" << endl;
        for (auto order : order_list) {
            cout << order->getType() << " order for " << order->get_user()->get_user_name()
                    << " | Total: ₹" << order->get_order_total()
                    << " | At: " << order->get_scheduler() << endl;
        }
    }


};
OrderManager* OrderManager::instance = nullptr;