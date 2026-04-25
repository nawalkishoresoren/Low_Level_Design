#include<iostream>

using namespace std;

//Abstract class
class Burger{
    public:
    virtual void prepare() = 0;
    virtual ~Burger() {}//virtual destructor
};

//Concrete classes
class BasicBurger: public Burger{
    public:
    void prepare() override
    {
        cout<<"Preparing Basic Burger...."<<endl;
    }

};

class StandardBurger: public Burger{
    public:
    void prepare() override
    {
        cout<<"Preparing Standard Burger with salad...."<<endl;
    }
};

class PremiumBurger: public Burger{
    public:
    void prepare() override
    {
        cout<<"Preparing Premium Burger with salad and sides ...."<<endl;
    }
};


class BurgerFactory{
    public: 
    Burger* create_Burger(string type)
    {
        if(type == "basic")
            return new BasicBurger;
        else if (type == "standard")
            return new StandardBurger;
        else if (type == "premium")
            return new PremiumBurger;
        else
            cout<<"Invalid Burger Type!!"<<endl;
            return nullptr;
    }
};

int main()
{
    string type = "premium";

    BurgerFactory* myburgerfactory = new BurgerFactory;
    Burger* burger = myburgerfactory->create_Burger(type);
    burger->prepare();

    return 0;
}