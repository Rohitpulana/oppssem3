#include<iostream>
using namespace std ;
class Book{
public:
        string title;
        string author;
        int *Rates;
        int RatesCounter;
   

Book(string title,string author){
    this->title=title;
    this->author=author;
    RatesCounter=2;
    Rates=new int[RatesCounter]; 
    Rates[0]=4;
    Rates[1]=5;   
    cout<<title+"constructor involved\n";
}
~Book(){
    delete[] Rates;
    Rates=nullptr;
      cout<<title+"destructor involved\n";
}

};


int main(){
    Book book1("stduy with rohit ","Rohit");
    Book book2("stduy with rupinder ","Rupinder");
}