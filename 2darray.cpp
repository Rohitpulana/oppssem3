// declaraton
// #include<iostream>
// using namespace std ;
// int main(){
//     // int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//       int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

// }


// traversal through 2darray
// #include<iostream>
// using namespace std ;
// int main(){
//     int arr[3][3]={1,2,3,4,5,6,7,8,9};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }




//////////////////////////////////////////////////////////////

// sum of 2d element
// #include<iostream>
// using namespace std ;
// int main(){

//     int arr[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[i][j];
//         }
//     }
//     int sum=0;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             sum+=arr[i][j];
//         }
//     }
//     cout<<sum;

// }  


//////////////////////////////////////
// add two matrices
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3];
//     int brr[3][3];
//     int rel[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[i][j];
//         }
//     }
//    for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>brr[i][j];
//         }
//     }
  
//    for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//         //    rel[i][j]=arr[i][j]+brr[i][j];
//         arr[i][j]+=brr[i][j];
//         }
//     }
//    for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j];
//         }
//         cout<<endl;
//     }
  
    
// }


// ///////////////////////////////
// transpose of matrix
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3];
//     int brr[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             brr[i][j]=arr[j][i];
//             cout<<brr[i][j];
//         }
//         cout<<endl;
//     }
    
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3];
//     int brr[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             brr[i][j]=arr[j][i];
//         }
//     }
//     for(int i=2;i<=0;i++){
//         for(int j=2;j<=0;j++){
//             cout<<brr[i][j];
//         }
//         cout<<endl;
//     }

// }


/////////////////////////////
// matrix multiplication
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// int m;
// cout<<"enter rows of !st matrix";
// cin>>m;
// int n;
// cout<<"enter cols of !st matrix";
// cin>>n;

// int p;
// cout<<"enter rows of 2nd matrix";
// cin>>p;
// int q;
// cout<<"enter cols of 2nd matrix";
// cin>>q;
// if(n==p){
//     int a[n][m];
//     int b[p][q];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>a[i][j];
//         }
//     }
//     for(int i=0;i<p;i++){
//         for(int j=0;j<q;j++){
//             cin>>b[i][j];
//         }
//     }
//     //resultat matrix;
//     int res[m][q];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<q;j++){
//             // res[i][j]=a[i][0]+b[0][j]*a[i][1]+b[1][j]*a[i][2]*b[2][j]
//             res[i][j] =0;
//             for(int k=0;k<p;k++){
//                 res[i][j]+=a[i][k]+b[k][j];
//             }
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<q;j++){
//             cout<<res[i][j];
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }


// }


////////////////////////////////////////
//waveprint


// write a matrix to print in wave form
// #include<iostream>
// using namespace std;
// int main(){
// int m;
// cout<<"enter rows of !st matrix";
// cin>>m;
// int n;
// cout<<"enter cols of !st matrix";
// cin>>n;

// int arr[m][n];
// for(int i=0;i<m;i++){
//     for(int j=0;j<n;j++){
//         cin>>arr[i][j];
//     }
// }

// //wave print 
// for(int i=0;i<m;i++){
//     if(i%2==0){
//             for(int j=0;j<n;j++){
//                cout<<arr[i][j]<<" ";
//             }
//             }
//             else{
//                 for(int j=n-1;j>=0;j--){
//                 cout<<arr[i][j]<<" ";
//                 }
//             }
//             cout<<endl;

// }

// }



// spiral printing

#include<iostream>
using namespace std;
int main()
{
 
}    
