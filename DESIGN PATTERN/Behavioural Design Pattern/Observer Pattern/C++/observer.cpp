#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


class Isubscriber{
    public:
    virtual void update() = 0;
    virtual ~Isubscriber(){};
};

class IChannel{
    public:
    virtual void subscribe(Isubscriber* subscriber) = 0;
    virtual void unsubscribe(Isubscriber* subscriber) = 0;
    virtual void notify() = 0;
    virtual ~IChannel(){};
};
class Channel: public IChannel{
    private:
    string name,latest_video;
    vector<Isubscriber*>subscriber_list;

    public:
    Channel(string name)
    {
        this->name = name;
    }
    void subscribe(Isubscriber* subscriber) override
    {
        if(find(subscriber_list.begin(),subscriber_list.end(),subscriber)==subscriber_list.end())
        {
            subscriber_list.push_back(subscriber);
        }

    }
    void unsubscribe(Isubscriber* subscriber) override
    {
        subscriber_list.erase(
            remove(subscriber_list.begin(), subscriber_list.end(), subscriber),
            subscriber_list.end()
        );

    }
    void notify() override
    {
        for(auto sub:subscriber_list)
        {
            sub->update();
        }
    }

    void upload_video(string title)
    {
        latest_video = title;
        cout<<"Uploading video "<<title<<endl;
        notify();
    }
    string get_video_data()
    {
        return latest_video;
    }
};


class Subscriber: public Isubscriber{
    private:
    string name;
    Channel* channel;
    public:
    Subscriber(string name,Channel* channel)
    {
        this->name = name;
        this->channel = channel;

    }
    void update() override
    {
        //Override the update function
        cout<<"Hey "<<name<<" Check out the ltest video *** "<<channel->get_video_data()<<" ***."<<endl;
    }
};

int main()
{
    Channel * channel = new Channel("Learning Observer Patter");

    Subscriber* subs1 = new Subscriber("varun",channel);
    Subscriber* subs2 = new Subscriber("aryan",channel);

    channel->subscribe(subs1);
    channel->upload_video("video1");

    return 0;
}