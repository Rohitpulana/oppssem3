// #include<iostream>
// using namespace std ;
// int main(){
//     //bubble sort
//     int arr[5]={3,5,1,4,2};
//     int n=5;

//     for(int i=0;i<n-1;i++){
//         bool flag=true;
//         for(int j=n-1;j>1+i;j++){
//             if(arr[j]>arr[j-1]){
//                 swap(arr[j],arr[j-1]);
//                 flag=false;
//             }

//         }
//        if(flag==true){  break;}
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }





/////////////////////////////////////////////////

// check if allmost sorted
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n=5;
//     int arr[]={4,2,9,7,8};
//     int brr[5];
//     for(int i=0;i<n;i++){
//         brr[i]=arr[i];
//     }
    
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     for(int i=0;i<n-1;i++){
//         bool flag=true;
//         for(int j=0;j<n-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 flag=false;
//             }
//         }
//         if(flag==true){
//             break;
//         }
//     }
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

//     bool flag=true;
//     for(int i=0;i<n;i++){
//       if(i==0){
//         if(brr[i]!=arr[i] && brr[i]!=arr[i+1]){
//             flag=false;
//             break;
//         }
        
//       }
//       else if(i==n-1){
//         if(brr[i]!=arr[i] && brr[i]!=arr[i-1]){
//             flag=false;
//             break;
//         }

//       }
//       else{
//         if(brr[i]!=arr[i] && brr[i]!=arr[i-1] && brr[i]!=arr[i+1]){
//         flag=false;
//         break;}
//       }
    
//     }
//       cout<<endl;
//     cout<<flag;

// }


////////////////////////
#include<iostream>
using namespace std ;
int main(){
    int arr[]={4,2,7,9,8};
    int n=5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    //almost sorted
for(int i=0;i<n-1;i++){
    if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
        i++;
    }

}///2 4 7 9 8
bool flag=true;
for(int i=0;i<n-1;i++){
    if(arr[i]>arr[i+1]){
        flag=false;
        break;
    }
}
cout<<endl;
cout<<flag;
         
}





    
