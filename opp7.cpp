#include<iostream>
using namespace std ;
  class Smartphone{
    public:
    virtual void takeselfie()=0;
    virtual void makecall()=0;
  };

class Android:public Smartphone {
public:
void takeselfie(){
    cout<<"Android selfie\n";
}
void makecall(){
    cout<<"Android calling\n";
}


};
class iphone: public Smartphone{
 public:
 void takeselfie(){
    cout<<"iphone selfie\n";
 }
 void makecall(){
    cout<<"iphone calling \n";
}

};


int main(){
 
// Smartphone * s1=new Android();
// s1->takeselfie();
Smartphone * s1=new iphone();
s1->takeselfie();
s1->makecall();


}
