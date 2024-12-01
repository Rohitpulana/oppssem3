// virtual function

// #include<iostream>
// using namespace std ;
// class Instrument{
//     public:
//     virtual void Makesound(){
//         cout<<"instrument is playing ";
//     }
// };

// class Accordion:public Instrument{
//      void Makesound(){
//         cout<<"Accordion  playing ";}
    

// };



// int main()
//     {
//        Instrument* i1=new Accordion();
//        i1->Makesound();
//     }




// Pure virtual funcion
#include<iostream>
using namespace std ;
class Instrument{
    public:
    virtual void Makesound()=0;
};

class Accordion:public Instrument{
     void Makesound(){
        cout<<"Accordion  playing\n";
    }

};

class Piano: public Instrument{
void Makesound(){
    cout<<"Piano Playing\n ";
}
};



int main()
    {
       Instrument* i1=new Accordion();
    //    i1->Makesound();
       Instrument* i2=new Piano();
    //    i2->Makesound();
       Instrument*instruments[2]={i1,i2};
       for(int i=0;i<2;i++){
        instruments[i]->Makesound();
       }
    }