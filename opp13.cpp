// copy constructor


#include<iostream>
using namespace std ;
class Book{
public:
        string title;
        string author;
        float *Rates;
        int RatesCounter;
   

Book(string title,string author){
    this->title=title;
    this->author=author;
    RatesCounter=2;
    Rates=new float[RatesCounter]; 
    Rates[0]=4;
    Rates[1]=5;   
    cout<<title+"constructor involved\n";
}

Book(const Book& original){
    title=original.title;
    author=original.author;
    // Rates=original.Rates;
    RatesCounter=original.RatesCounter;

    Rates=new float[RatesCounter];
    for(int i=0;i<RatesCounter;i++){
       Rates[i]=original.Rates[i];
    }

}
~Book(){
    // delete[] Rates;
    // Rates=nullptr;
      cout<<title+"destructor involved\n";
}

};


int main(){
    Book book1("stduy with rohit ","Rohit");
    Book book2("stduy with rupinder ","Rupinder");
    // Book book3(book1);
    Book book3=book1;
}
