#include<iostream>

using namespace std;

class Singleton{
    private:
    Singleton()
    {
        cout<<"Constructor for singleton called.."<<endl;
    }

    static Singleton* instance;

    public:
    static Singleton* getInstance()
    {
        if(instance == nullptr)
        {
            instance =  new Singleton();
        }
        return instance;
    }
};
Singleton* Singleton::instance = nullptr;

int main()
{
    Singleton* s1 = Singleton::getInstance();
    Singleton* s2 = Singleton::getInstance();

    cout<<"Comparing the pointers = "<<(s1==s2)<<endl;
    return 0;
}