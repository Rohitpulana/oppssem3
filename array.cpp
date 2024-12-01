// // passing array to functions
// #include<iostream>
// using namespace std;
// void display(int arr[]){
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<"\n";
//     }

// }

// void change(int b[]){
//     b[0]=100;
// } 
// int main(){
//     int arr[]={1,4,2,7,4};
//     display(arr);
//     change(arr);
//     display(arr);

// }


// array  and pointer

// #include<iostream>
// using namespace std;
// int  main(){
//     int arr[]={4,3,5,6};
//     int*ptr=arr;
//     cout<<ptr;
    
// }



// vector

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v; //youneed not to give the size;
//     v.push_back(6);    
//     cout<<v.size()<<endl;
//       v.push_back(1);    
//     cout<<v.size()<<endl;
//       v.push_back(9);    
//     cout<<v.size()<<endl;
//       v.push_back(10);    
//     cout<<v.size()<<endl;
// }




// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v;
//     v.push_back(6);
//      v.push_back(1);
//       v.push_back(3);
//        v.push_back(4);
//         v.push_back(9);
//          v.push_back(4);
//           v.push_back(1);
//            v.push_back(8);
// for(int i=0;i<v.size();i++){
//     cout<< v[i]<<" ";

// }
// cout<<endl;
// v.pop_back();
// for(int i=0;i<v.size();i++){
//     cout<< v[i]<<" ";

// }

// }



// #include<iostream>
// #include<vector>
// using namespace std ;
// int main(){
//     vector<int> v(5);
//     cout<<v.size();
//      cout<<v.capacity();
// }


// taking input in vector;
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){ 
//     vector<int> v(5);
//     for(int i=0;i<v.size();i++){
//         cin>>v[i];
//     }

//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<endl;
//     }

// }


// vector at 
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int> v;
//     v.push_back(9);
//     v.push_back(10);
//     v.push_back(6);
//     v.push_back(1);
//     for(int i=0;i<v.size();i++){
//         cout<<v.at(i)<<" ";
//     }
//     cout<<endl;

//     // sort
//     sort(v.begin(),v.end());
//      for(int i=0;i<v.size();i++){
//         cout<<v.at(i)<<" ";
//     }

//     // cout<<v[2];
//     // cout<<v.at(2);
// }


// passing vectors to functions 

// #include<iostream>
// #include<vector>
// using namespace std ;
// void change (vector<int>& a ){
//     a[0]=100;
//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;

// }
// int main(){
//     vector<int> v;
//     v.push_back(9);
//      v.push_back(10);
//       v.push_back(6);
//        v.push_back(1);
//        for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//        }
//        cout<<endl;
//        change(v);
//        for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//        }
//        cout<<endl;
// }



// looping in vector 
  

//   find the last occurance of x in the array
 
//  #include<iostream>
//  #include<vector>
//  using namespace std ;
//  int main(){
//     vector<int> v;
//     v.push_back(1);
//       v.push_back(9);
//         v.push_back(0);
//           v.push_back(1);
//             v.push_back(5);
//             int x=1;
//             int idx=-1;
//             // for(int i=0;i<v.size();i++){
//             //     if(v[i]==x) idx=i;
//             // }
//             for(int i=v.size()-1;i>=0;i--)
//             if(v[i]==x) {
//             idx=i;
//             break;}
//             cout<<idx;
//  }
 


// find doublets in array


