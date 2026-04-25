#include<iostream>

using namespace std;

//Abstract method
class Burger{
    public:
    virtual void prepare() =0;
    virtual ~Burger(){};
};

//Concrete Burger classes.
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


//Abstract Garlic Bread
class GarlicBread{
    public:
    virtual void prepare() =0;
    virtual ~GarlicBread(){};
};

//Concrete GarlicBread classes.
class BasicGarlicBread:public GarlicBread{
    public:
    void prepare() override
    {
        cout<<"Preparing Basic GarlicBread.."<<endl;
    }
};
class StandardGarlicBread:public GarlicBread{
    public:
    void prepare() override
    {
        cout<<"Preparing Standard GarlicBread with salad.."<<endl;
    }
};
class PremiumGarlicBread:public GarlicBread{
    public:
    void prepare() override
    {
        cout<<"Preparing premium GarlicBread with sides and salad.."<<endl;
    }
};
class BasicWheatGarlicBread:public GarlicBread{
    public:
    void prepare() override
    {
        cout<<"Preparing Basic wheat GarlicBread.."<<endl;
    }
};
class StandardWheatGarlicBread:public GarlicBread{
    public:
    void prepare() override
    {
        cout<<"Preparing Standard wheat GarlicBread with salad.."<<endl;
    }
};
class PremiumWheatGarlicBread:public GarlicBread{
    public:
    void prepare() override
    {
        cout<<"Preparing premium wheat GarlicBread with sides and salad.."<<endl;
    }
};


//Abstract call mealfactory
class MealFactory{
    public:
    virtual Burger* create_burger(string &type) = 0;
    virtual GarlicBread* create_garlicbread(string &type) = 0;
    virtual ~MealFactory(){};
};

class BergerKing:public MealFactory{
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
            cout<<"Unkown Burger type!!"<<endl;
            return nullptr;
        }     
    }
    GarlicBread* create_garlicbread(string &type) override
    {
        if(type == "basic")
            return new BasicGarlicBread;
        else if(type == "standard")
            return new StandardGarlicBread;
        else if(type == "premium")
            return new PremiumGarlicBread;
        else
        {
            cout<<"Unkown Garlic Bread type!!"<<endl;
            return nullptr;
        }

    }
};

class Subway:public MealFactory{
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
            cout<<"Unkown Burger type!!"<<endl;
            return nullptr;
        }
            
    }
    GarlicBread* create_garlicbread(string &type) override
    {
        if(type == "basic")
            return new BasicWheatGarlicBread;
        else if(type == "standard")
            return new StandardWheatGarlicBread;
        else if(type == "premium")
            return new PremiumWheatGarlicBread;
        else
        {
            cout<<"Unkown Garlic Bread type!!"<<endl;
            return nullptr;
        }

    }

};

int main()
{
    string burger_type = "basic";
    string garlic_bread_type = "premium";

    MealFactory* my_meal = new Subway();  
    Burger* burger = my_meal->create_burger(burger_type);
    GarlicBread* garlic_bread = my_meal->create_garlicbread(garlic_bread_type);

    burger->prepare();
    garlic_bread->prepare();

    delete burger;
    delete garlic_bread;
    delete my_meal;

    return 0;
}