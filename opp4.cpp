//inheritence 

#include<iostream>
#include<list>
using namespace std;
class youtube{
    private:
    string Name;
   int Subcount;
    list<string> Published;
    protected:
    string Ownername;
    public:
    youtube(string  name,string ownername){
        Name=name;
        Ownername=ownername;
        Subcount=0;
    }
    void getinfo(){
        cout<<Name<<endl;
        cout<<Ownername<<endl;
        cout<<Subcount<<endl;
    }
    void sub(){
        Subcount++;
    }
     void unsub(){
        if(Subcount<0)
        Subcount--;
    }
};


class CookingYoutubeChannel : public youtube{   // cooking youtube channel inherit all properties from youtube
       //youtube -> base class;
       //cookingyoutubechannel->derived class;
       public:
       CookingYoutubeChannel(string name,string ownername):youtube(name,ownername){

       }
    void Practice(){
        cout<<Ownername<<" is practing cooking"<<endl;
    }

};

int main(){
    // youtube ytchannel("rohit","opps in c++");
    // ytchannel.sub();
    // ytchannel.sub();
    // ytchannel.sub();
    // ytchannel.getinfo();
    CookingYoutubeChannel ytchannel("cooking with riya","Riya bansal");
    ytchannel.sub();
    ytchannel.sub();
    ytchannel.sub();
    ytchannel.Practice();
    ytchannel.getinfo();

}
