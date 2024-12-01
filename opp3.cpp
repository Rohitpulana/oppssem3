#include<iostream>
#include<list>
using namespace std ;
class youtube{
    private:
    string Name;
    string Ownername;
    int subcount;
    list<string> Published;
public:
    youtube(string name,string ownername){
        Name=name;
        Ownername=ownername;
        subcount=0;
    }
    void getinfo(){
        cout<<"name "<<Name<< endl;
        cout<<"ownername "<<Ownername<< endl;
        cout<<"subcount "<<subcount<< endl;
        cout<<"videos"<<endl;
       for(string videotitle:Published){
        cout<<videotitle;
    }}
    void sub(){
        subcount++;
    }
    void unsub(){
        if (subcount>0)
        subcount--;
    }

    void publishvideo(string title){
        Published.push_back(title);
    }
};

int main(){
    youtube ytchannel("programming","rohit");
    ytchannel.sub();
    ytchannel.sub();
    ytchannel.sub();
    ytchannel.publishvideo("c++");
    ytchannel.getinfo();

}