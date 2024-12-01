#include<iostream>
using namespace std ;
class Customer
{   string name;
    int balance,account_number;
    public:
    Customer(string name,int balance,int account_number){
       this->name=name;
       this->balance=balance;
       this->account_number=account_number;
    }
// deposti
void deposit(int amount)
    {
        if(amount>0){
            balance+=amount;
            cout<<amount<<" is credited succecceeefully"<<endl;  
        }
        else{
        throw runtime_error("amount shold be positive");
        }

    }

void withdraw(int amount){
    if(amount<=balance&&amount>0)
    {
    balance-=amount;
    cout<<amount<<"is debited successfully"<<endl;  
    }
    else if(amount<0){
        throw runtime_error("amount should be positive\n");

    }
    else{
        throw "Your balance is low\n";
    }
}
   
};
int main(){
    Customer c1("ayush",2300,23);
    try{
    c1.deposit(200);
    c1.withdraw(6000);
    }
    catch(const runtime_error &e){
        cout<<"exception Occured:"<<e.what()<<endl;
    }


}

/////////////////////////////////////////////////////

// #include<iostream>
// using namespace std ;
`1  qqqqqqqqqqqqqqqqq


// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     try{ 
//         if(b==0){
//             throw "divide by zero is not possible";
//         }
//     int c=a/b;
//     cout<<c<<endl;
//     }
//     catch(const char* e){
//         cout<<"exception occur:"<<e;

//     }
 


// }

////////////////////////////////////////
// #include<iostream>
// #include<exception>
// using namespace  std;

// class exception{
//     protected:
//     string msg;
//     public:
//     exception(string msg){
//         this->msg=msg;
//     }
//     string what(){
//         return msg ;
//     }
// };
// int main(){
//     try{
//     int *pro=new int[10000000000];
//     cout<<"memory allocation is succeccfully\n";
//     delete[] pro;
    
//     }

//     catch(const bad_alloc &e){
//         cout<<"Ecption occured: "<<e.what()<<endl;;
//     }
//     return 0;
// }
