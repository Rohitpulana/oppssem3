//polymorphism

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
    int contentquality;
    public:
    youtube(string  name,string ownername){
        Name=name;
        Ownername=ownername;
        Subcount=0;
        contentquality=0;
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
void checkanalytics(){
    if (contentquality<5)
        cout<<Name<<"has bad quality content"<<endl;
    
    else
        cout<<Name<<"has great content"<<endl;
    
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
        contentquality++;
    }

};


class SingerYoutubeChannel : public youtube{   // cooking youtube channel inherit all properties from youtube
       //youtube -> base class;
       //cookingyoutubechannel->derived class;
       public:
       SingerYoutubeChannel(string name,string ownername):youtube(name,ownername){

       }
    void Practice(){
        cout<<Ownername<<" is practing singing"<<endl;
        contentquality++;
    }

};

int main(){
    // youtube ytchannel("rohit","opps in c++");
    // ytchannel.sub();
    // ytchannel.sub();
    // ytchannel.sub();
    // ytchannel.getinfo();
    CookingYoutubeChannel cookingytchannel("cooking with riya ","Riya bansal");
    // cookingytchannel.sub();
    // cookingytchannel.sub();
    // cookingytchannel.sub();
    // cookingytchannel.Practice();
    // cookingytchannel.getinfo();

    SingerYoutubeChannel singerytchannel("t-series ","rupinder");
    

    cookingytchannel.Practice();
    singerytchannel.Practice();
     singerytchannel.Practice();
      singerytchannel.Practice();
       singerytchannel.Practice();
        singerytchannel.Practice();

youtube *yt1=&cookingytchannel;

youtube *yt2=&singerytchannel;

yt1->checkanalytics();
yt2->checkanalytics();



}
