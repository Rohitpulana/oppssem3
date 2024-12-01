//friend fuctions

// #include<iostream>
// using namespace std;
// class EquilateralTriangle{
// private:
// float a;
// float circumference;
// float area;
// public:
// void setA(float length){
//     a=length;
//     circumference=a*3;
//     area=(1.73*a*a)/4;
// }
// friend void PrintResults(EquilateralTriangle);
// };

// void PrintResults(EquilateralTriangle et){
//     cout<<"circumference"<<et.circumference<<endl;
//     cout<<"area"<<et.area<<endl;
// }


// int main(){
//     EquilateralTriangle et;
//     et.setA(3);
//     PrintResults(et);

// }




// friend classes
#include<iostream>
using namespace std;
class EquilateralTriangle{
private:
float a;
float circumference;
float area;
public:
void setA(float length){
    a=length;
    circumference=a*3;
    area=(1.73*a*a)/4;
}
friend class Homework;

// friend void PrintResults(EquilateralTriangle);
};

 class  Homework{
    public:
    void PrintResults(EquilateralTriangle et){
    cout<<"circumference"<<et.circumference<<endl;
    cout<<"area"<<et.area<<endl;
}
};




int main(){
    EquilateralTriangle et;
    et.setA(3);
    Homework h;

    h.PrintResults(et);

}