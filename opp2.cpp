#include<iostream>
#include<list>
using namespace std ;
class youtube{
public:
 string Name;
 string Ownername;
 int subcount;
 list<string> published;

 youtube(string name,string ownername){ // constructor
  Name=name;
  Ownername=ownername;
  subcount=0;
 }
 void getinfo(){
    cout<< "name:"<<Name <<endl;
    cout<< "owner name:"<<Ownername <<endl;
    cout<< "subcount:"<<subcount <<endl;
    cout<<"videos"<<endl;
    for(string videotitle:published){
    cout<<videotitle;
}

 }

};


int main(){
youtube ytchannel("coding","rohit");
ytchannel.published.push_back("c++\n");
ytchannel.published.push_back("opps \n");
youtube ytchannel2("programming","rupinder");

ytchannel.getinfo();
ytchannel2.getinfo();

}