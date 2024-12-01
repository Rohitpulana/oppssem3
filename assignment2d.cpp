// #include<iostream>
// using namespace std ;
// int main(){
//       int n;
//       cin>>n;
//     int arr[n][n];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }}

//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(i==j || i+j==3-1){
//                 cout<<arr[i][j];
//             }
//             else{
//                 cout<<" ";
//             }
//          } //cout<<endl;
//     }
// }



///////////////////////////////////////////
// rotate a matrix by 90 degree

#include<iostream>
using namespace std ;
 int main (){
    int brr[3][3];
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            brr[i][j]=arr[j][i];
        }
    }
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<brr[i][j];
        }
    }


 }