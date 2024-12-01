// vector
// increase your rows
// variable columns
// passing of 2d array into function
// __
// __ __
// __ __ __
// __ __

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
      
//       vector<int>v1;//1 2 3
//        v1.push_back(1);
//           v1.push_back(2);
//             v1.push_back(3);
//        vector<int>v2;//4 5
//           v2.push_back(4);
//             v2.push_back(5);
//         vector<int>v3;//6 7 8 9 10
//          v3.push_back(6);
//           v3.push_back(7);
//            v3.push_back(8);
//             v3.push_back(9);
//             v3.push_back(10);

//         vector<vector<int>> v;
//             v.push_back(v1);
//             v.push_back(v2);
//             v.push_back(v3);
       
//        cout<<v[0][3];
// }

//////////////////////////
// #include<iostream>
// using namespace std ;
// void change(int a[]){
//     a[0]=9;
// }
// void change2d(int arr[][]){
//     arr[0][0]=100;
// }
// int main(){
    // int arr[3]={1,2,3};
    // cout<<arr[0]<<endl;
    // change(arr);
    // cout<<arr[0];
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     cout<<arr[0][0]<<endl;
//     change2d(arr);
//     cout<<arr[0][0];

// }

/////////////////////////////////
// 2d vector to functions
// #include<iostream>
// #include<vector>
// using namespace std ;
// void change2dvector(vector<vector<int>> &v){
//     v[0][0]=100;
// }
// int main(){

// }


///////////////////////////////
// 2d_vectordeclaration
// #include<iostream>
// #include<vector>
// using namespace std ;
// int main(){
    // vector<int> v(5,2);
    // cout<<v[0];
    ///////////////////////
    // int arr[3][4]
//     vector<vector<int>> v(3,vector<int>(4,20));
   
//    for(int i=0;i<3;i++){
//     for(int j=0;j<4;j++){
//         cout<<v[i][j]<<" ";
//     }
//     cout<<endl;
//    }
//     cout<<v.size()<<endl;
//     cout<<v[0].size()<<endl;

// }


///////////////////////////////////////
//  pascaltriangle leet code;
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int m=5;
//     vector<vector<int>> v;
//     for(int i=1;i<=5;i++){
//       vector<int> a(i);
//       v.push_back(a);
//     }

// /////////////////////////
// for(int i=0;i<5;i++){
// for(int j=0;j<=i;j++){
//     if((j==0)||(j==i)){
//         v[i][j]=1;
//     }
// else{
//     v[i][j]=v[i-1][j-1]+v[i-1][j];
//     }
//    }
// }

// for(int i=0;i<5;i++){
//     for(int j=0;j<=i;j++){
//         cout<<v[i][j]<<" ";
//     }
//     cout<<endl;
// }
// }


