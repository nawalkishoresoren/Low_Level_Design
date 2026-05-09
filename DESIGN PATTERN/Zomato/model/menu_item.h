#include<iostream>

using namespace std;

class MenuItem{
    private:
    string code;
    string name;
    int price;

    public:
    MenuItem(string &code, string &name, int &price)
    {
        this->code = code;
        this->name = name;
        this->price = price;
        cout<<"Calling constructor for MenuItem"<<endl;
    }

    string get_code()
    {
        cout<<"MenuItem code is "<<code<<endl;
        return code;
    }
    string get_name()
    {
        cout<<"MenuItem name is "<<name<<endl;
        return name;
    }
    int get_price()
    {
        cout<<"MenuItem price is "<<price<<endl;
        return price;
    }
};
