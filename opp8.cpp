#include<iostream>
#include<string>
#include<list>
using namespace std;
struct Youtube{
    string Name;
    int Subcount;

    Youtube(string name,int subcount){
        Name=name;
        Subcount=subcount;

    }
    bool operator ==(const Youtube& channel)const{
        return this->Name==channel.Name;
    }
};
//overload insertion operator globally....
ostream& operator<<(ostream& COUT,Youtube&ytchannel){
    COUT<<"name:"<< ytchannel.Name<<endl;
    COUT<<"Subcount:"<<ytchannel.Subcount<<endl;
    return COUT;
}



struct Mycollection{
    list<Youtube>mychannels;


    void operator+=(Youtube& channel){
        this->mychannels.push_back(channel);
    }
     void operator-=(Youtube& channel){
        this->mychannels.remove(channel);
    }
};
ostream& operator<<(ostream& COUT ,Mycollection& mycollection)
{
    for(Youtube ytchannel:mycollection.mychannels )
    COUT<<ytchannel<<endl;
    return COUT;
}

int main(){
    Youtube y1("rohit",1000);
    Youtube y2("riya",2000);
    // cout<<y1<<y2;
    // operator<<(cout,y1);
    Mycollection mycollection;
    mycollection += y1;
    mycollection+=y2;
    mycollection-=y1;
    cout<<mycollection;
}

