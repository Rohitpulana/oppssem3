// find max number between 2 numbers
// #include<iostream>
// #include <cstdlib>
// using namespace std ;
// class Find{
// private:
// int n1;
// int n2;
// public:
//     Find(int x,int y){
//         n1=x;
//         n2=y;
//     }
//     int max_num(){
//         return (n1+n2+abs(n1-n2))/2;
//     }
//     int min_num(){
//          return(n1+n2-abs(n1-n2))/2;
//     }

//     void display(){
//         cout<<"max:"<<max_num();
//         cout<<"min:"<<min_num();
//     }

// };
// int main(){
//  Find obj1(3,5);
//   obj1.display();
//   return 0;
// }



// find if 2 numbers are equal or not
// #include<iostream>
// using namespace std ;
// class Equal{
// private:
// int n1;
// int n2;
// public :
// Equal(int x,int y){
//     n1=x;
//     n2=y;
// }
// bool check(){
//     return n1^n2;
// }

// void display(){
//     if(!check()){
//         cout<<"the 2 numbers are equal"<<endl;
//     }
//     else{
//         cout<<"the 2 numbers are not equal"<<endl;
//     }
// }

// };

// int main(){
//     int x;
//     int y;
//     cin>>x>>y;
//     Equal obj(x,y);
//     obj.display();

// }


// change farenheight to celcius;
// #include<iostream>
// #include<iomanip>
// using namespace std;
// class convert{
// private:
//     double feh;
// public:
//     convert(double f){
//         feh=f;
//     }
//    double change(){
//     double cel=(feh-32)/(0.8);
//     return cel;
//    }
//    void display(){
//     double ans=change();
//     cout<<setprecision(5)<<ans;
//    }
// };

// int main(){
//     convert obj(75.0);
//     obj.display();
// }



// sum of naturalnumber

// #include<iostream>
// using namespace std ;
// const int MOD=1e9+7;
// class Sum{
//     private:
//     int num;
// public:
// Sum(int n){
//     num=n;
// }
// int calculate_sum(){
//     long long sum=((num)*(num+1)/2)%MOD;
//     return sum;
// }
// void display(){
//     cout<<"sum->"<<calculate_sum()<<endl;
// }
// };


// int main(){
//     int n;
//     cin>>n;
//     Sum obj(n);
//     obj.display();

// }


// 