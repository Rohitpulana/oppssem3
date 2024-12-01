// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int> v(5);
//     for(int i=0;i<5;i++){
//         cin>>v[i];
//     }
//     sort(v.begin(),v.end());//O(nlogn)//inbuilt sorting function
//     for(int i=0;i<5;i++){
//         cout<<v[i];
//     }
// }




/////////////////////////////////////////////
//BUBLE SORT
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     int n=6;
//     int arr[5]={5,4,3,2,1};
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
    // for(int i=0;i<=n-1;i++){
    //  for(int j=0;j<n-1-i;j++){
    //     if(arr[j]>arr[j+1]){
    //         // int temp=arr[j];
    //         // arr[j]=arr[j+1];
    //         // arr[j+1]=temp;
    //         swap(arr[j],arr[j+1]);
    //     }

    //  }
    // }


    //////////////////////////////
    //bubble sort optimized
//     for(int i=0;i<=n-1;i++){//n-1 passes
//     //traverse
//     bool flag=true;
//      for(int j=0;j<n-1-i;j++){
//         if(arr[j]>arr[j+1]){
//             swap(arr[j],arr[j+1]);
//             flag=false;
//         }

//      }
//      if(flag==true){
//         break;
//      }
//     }
//     cout<<endl;
//      for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }




// ///////////////////////////
// #include<iostream>
// #include<vector>
// using namespace std ;
// int main(){
//     string s="AZYZXBDXJK";
//     string str;
//     for(int i=0;i<s.length();i++){
//         if(s[i]>='X'){
//             str.push_back(s[i]);
//         }
//     }  for(int i=0;i<=str.length();i++){
//      for(int j=0;j<str.length()-1-i;j++){
//         if(str[j]>str[j+1]){
    
//             swap(str[j],str[j+1]);
//         }

//      }
//     }
//     for(int i=0;i<s.length();i++){
//     cout<<str;}

// }


#include<iostream>
#include<vector>
using namespace std;
int main(){
int arr[]={5,0,1,2,0,0,4,0,3};
int n=9;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
//bubble sort
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
        if(arr[j]==0){
        swap(arr[j],arr[j+1]);
    }}
}
cout<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

}
