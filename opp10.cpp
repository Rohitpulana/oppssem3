#include<iostream>
using namespace std ;
class User{
    public:
    string Firstname;
    string Lastname;
    int age;
    string email;
    // default constructor
    // User(){
    //     Firstname="rr";
    //     LastName="np";
    //     age=21;
    //     email="@gmail.com";
    // }
    // parms constructor
    User(string Fname,string Lname,int age){
        Firstname=Fname;
        Lastname=Lname;
        this->age=age;
    }
};
ostream& operator<<(ostream& COUT,User& user){
    COUT<<"name:"<< user.Firstname<<endl;
    COUT<<"last name:"<<user.Lastname<<endl;
    COUT<<"age:"<<user.age<<endl;
    return COUT;
}

int main(){
User user1("rohit","pulana",20);
cout<<user1;

}