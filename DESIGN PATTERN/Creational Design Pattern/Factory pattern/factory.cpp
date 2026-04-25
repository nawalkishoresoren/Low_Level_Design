#include<iostream>

using namespace std;

//Abstract method
class Burger{
    public:
    virtual void prepare() =0;
    virtual ~Burger(){};
};

class BasicBurger:public Burger{
    public:
    void prepare() override
    {
        cout<<"Preparing Basic Burger.."<<endl;
    }
};
class StandardBurger:public Burger{
    public:
    void prepare() override
    {
        cout<<"Preparing Standard Burger with salad.."<<endl;
    }
};
class PremiumBurger:public Burger{
    public:
    void prepare() override
    {
        cout<<"Preparing premium Burger with sides and salad.."<<endl;
    }
};
class BasicWheatBurger:public Burger{
    public:
    void prepare() override
    {
        cout<<"Preparing Basic wheat Burger.."<<endl;
    }
};
class StandardWheatBurger:public Burger{
    public:
    void prepare() override
    {
        cout<<"Preparing Standard wheat Burger with salad.."<<endl;
    }
};
class PremiumWheatBurger:public Burger{
    public:
    void prepare() override
    {
        cout<<"Preparing premium wheat Burger with sides and salad.."<<endl;
    }
};


class BurgerFactory{
    public:
    virtual Burger* create_burger(string &type)=0;
    virtual ~BurgerFactory(){};
};

class SingBurger: public BurgerFactory{
    public:
    Burger* create_burger(string &type) override
    {
        if(type == "basic")
            return new BasicBurger;
        else if(type == "standard")
            return new StandardBurger;
        else if(type == "premium")
            return new PremiumBurger;
        else
        {
            cout<<"Unkown SingBurger type!!"<<endl;
            return nullptr;
        }
            
    }
};
class KingBurger: public BurgerFactory{
    public:
    Burger* create_burger(string &type) override
    {
        if(type == "basic")
            return new BasicWheatBurger;
        else if(type == "standard")
            return new StandardWheatBurger;
        else if(type == "premium")
            return new PremiumWheatBurger;
        else
        {
            cout<<"Unkown KingBurger type!!"<<endl;
            return nullptr;
        }
            
    }

};

int main()
{
    string type = "basic";
    BurgerFactory* my_burger_factory = new KingBurger;
    Burger* burger = my_burger_factory->create_burger(type);
    burger->prepare();

    return 0;
}