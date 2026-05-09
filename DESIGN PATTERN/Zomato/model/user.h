#include<iostream>
#include "cart.h"

using namespace std;

class User{
    private:
    int id;
    string name;
    string address;
    Cart* cart;

    public:
    User(int &id,string &name,string &address)
    {
        this->id = id;
        this->name = name;
        this->address = address;
        cart = new Cart;
    }

    int get_id()
    {
        cout<<"ID = "<<id<<endl;
        return id;
    }
    string get_user_name()
    {
        cout<<"User name = "<<name<<endl;
        return name;
    }
    string get_user_address()
    {
        cout<<"User address = "<<address<<endl;
        return address;
    }
    


}