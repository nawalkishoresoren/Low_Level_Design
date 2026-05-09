#include<iostream>
#include<vector>
#include <algorithm>
#include <cctype>

#include "../model/restaurant.h"

using namespace std;


//Everymanager is Singeton
class RestaurantManager{
    private:
    static RestaurantManager* instance;
    vector<Restaurant*>restaurant_list;

    public:
    static RestaurantManager* get_instance()
    {
        if(!instance)
        {
            instance = new RestaurantManager;
        }
        return instance;
    }

    void add_restaurant(Restaurant* r)
    {
        restaurant_list.push_back(r);
    }

    vector<Restaurant*> get_restaurant_bu_location(string loc)
    {
        //temporary vector to store result
        vector<Restaurant*>result;
        transform(loc.begin(), loc.end(), loc.begin(), ::tolower);
        for(auto restaurant:restaurant_list)
        {
            string restaurant_address = restaurant->get_restaurant_address();
            transform(restaurant_address.begin(), restaurant_address.end(), restaurant_address.begin(), ::tolower);
            if(restaurant_address==loc)
            {
                result.push_back(restaurant);
            }
        }
        return result;
    }
};
RestaurantManager* RestaurantManager::instance = nullptr;
