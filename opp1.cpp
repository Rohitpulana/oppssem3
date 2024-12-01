#include<iostream>
#include<list>
using namespace std ;
class youtube{
public:
 string name;
 string ownername;
 int subcount;
 list<string> published;

};


int main(){
youtube ytchannel;
ytchannel.name="opps";
ytchannel.ownername="rohit";
ytchannel.subcount=1800;
ytchannel.published={"c++","html","css","opps"};
cout<< "name:"<<ytchannel.name <<endl;
cout<< "owner name:"<<ytchannel.ownername <<endl;
cout<< "subcount:"<<ytchannel.subcount <<endl;
cout<<"videos"<<endl;
for(string videotitle:ytchannel.published){
    cout<<videotitle;
}


}