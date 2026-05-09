#include<iostream>
#include<vector>
#include "menu_item.h"

using namespace std;


class Restaurant{
    private:
    static int global_restaurant_count;
    int id;
    string name;
    string address;
    vector<MenuItem>menu;

    public:
    Restaurant(int &id, string &name, string &address)
    {
        this->name = name;
        this->address = address;
        this->id = global_restaurant_count++;

        cout<<"Calling Restaurant constructor"<<endl;
    }

    int get_id()
    {
        cout<<"ID = "<<id<<endl;
        return id;
    }
    string get_restaurant_name()
    {
        cout<<"Restaurant name = "<<name<<endl;
        return name;
    }
    string get_restaurant_address()
    {
        cout<<"Restaurant address = "<<address<<endl;
        return address;
    }

};
int Restaurant::global_restaurant_count = 0;

