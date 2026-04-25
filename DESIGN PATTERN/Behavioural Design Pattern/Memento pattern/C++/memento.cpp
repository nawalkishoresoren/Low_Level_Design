//Database Transaction Management
#include<iostream>
#include<map>
using namespace std;

class Memento{
    private:
    map<int,int>snapshot;
    
    public:
    Memento(map<int,int>&db_snapshot)
    {
        this->snapshot = db_snapshot;
    }

    map<int,int> get_db()
    {
        return snapshot;
    }
};

class Database{
    private:
    map<int,int>db_map;

    public:

    bool add_to_db(int key,int value)
    {
        cout<<"=== ADD TO DB ==="<<endl;
        auto it = db_map.find(key);
        if(it!= db_map.end())
        {
            cout<<"=== KEY ALREAD PRESENT ==="<<endl;
        }
        else
        {
            db_map[key]=value;
            cout<<"=== SUCCESS ==="<<endl;
            return true;
        }
        return false;
    }

    bool update_db(int key,int new_value)
    {
        cout<<"=== UPDATE DB ==="<<endl;
        auto it = db_map.find(key);
        if(it!= db_map.end())
        {
            it->second=new_value;
            cout<<"=== SUCCESS ==="<<endl;
            return true;
        }
        cout<<"=== KEY NOT PRESENT ==="<<endl;
        return false;
    }

    bool delete_from_db(int key)
    {
        cout<<"=== DELETE FROM DB ==="<<endl;
        auto it = db_map.find(key);
        if(it != db_map.end())
        {
            db_map.erase(it);
            cout<<"=== SUCCESSFULLY DELETED ==="<<endl;
            return true;
        }
        else
        {
            cout<<"=== KEY NOT PRESENT ==="<<endl;
        }
        return false;
    }
    
    Memento create_memento()
    {
        cout<<"=== CREATE MEMENTO ==="<<endl;
        return Memento(db_map);
    }

    map<int,int> restore(Memento memento)
    {
        return memento.get_db();
    }
};

int main()
{
    return 0;
}