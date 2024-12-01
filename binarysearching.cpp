// #include<iostream>
// using namespace std;
// int main(){
// int arr[9]={1,2,4,5,9,15,18,21,24};
// int x= 20;
// int n=9;
//   for(int i=0;i<n;i++){
//     if(arr[i]>x){
//         cout<<"the lower bound is "<<arr[i-1];
//         break;
//     }
//   }//O(n)....
// }



///////////////////////////////////////

// #include<iostream>
// using namespace std;
// int main(){
// int arr[9]={1,2,4,5,9,15,18,21,24};
// int x= 20;
// int n=9;
// int x=12;
// int lo=0;
// int hi=n-1;
// bool flag=true
// while(lo<hi){
//     int mid=lo+(hi-lo)/2;
//     if(arr[mid]==x){
//         cout<<arr[mid-1];
//         break;

//     }
//     else if(arr[mid]<x)lo=mid;
//     else hi=mid-1;
// }

 
// }

// find first occurance 
// #include<iostream>
// using namespace std ;
// int main(){
//     int arr[]={1,2,2,3,3,3,3,3,4,4,5,5,9};
//     int n=13;
//     int x=3;
//     int lo=0;
//     int hi=n-1;
//     bool flag=false;
//     while(lo<=hi){
//         int mid=(lo+hi)/2;
//         if(arr[mid]==x){
//             if(arr[mid-1]==x){
//                 hi=mid-1;
//             }
//             else{
//                 flag=true;
//                 cout<<mid;
//                 break;
               
//             }
//         }
//         else if(arr[mid]>x){
//             hi=mid-1;
//         }
//         else{
//             lo=mid+1;
//         }
        
//     } 
//     if(flag==false)cout<<-1;
   
// }



/////////////////////////////
// linear search
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[7]={0,1,3,4,6,8,9};
//     int n=7;
//     // bool flag=true;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=i){
//             // flag=false;
//             cout<<i;
//             break;
//         }
        
//     }
// }

///////////////////////////
// binary search
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={0,1,3,4,6,7,8,9,11};
//     int n=9;
//     int lo=0;
//     int hi=n-1;
//     int ans= -1;
//     while(lo<=hi){
//     int mid =(lo+hi)/2;
//     if(arr[mid]==mid){
//         lo=mid+1;
        
//     }
//     else{
//         ans=mid;
//         hi=mid-1;
        
//     }
    
//     }cout<<ans;

// }



// last occurance 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,2,3,3,3,3,3,3,4,4,4,4,5,5,6};
//     int lo=0;
//     int n=16;
//     int hi=n-1;
//     int x=3;
//     int ans=0;
//     while(lo<=hi){
//         int mid=(lo+hi)/2;
//         if(arr[mid]==x){
//             if(arr[mid+1]==x) lo=mid+1;
//             else {ans=mid;
//             break;}

//         }
//         else if(arr[mid]>x)hi=mid-1;
//         else lo=mid+1;
//     }cout<<ans;
    
// }



// #include<iostream>
// using namespace std ;
// int main(){
//     int arr[]={0,0,0,0,0,1,1,1,1,1,1,1,1};
//     int n=13;
//     int x=1;
//     int lo=0;
//     int hi=n-1;
//     bool flag=false;
//     while(lo<=hi){
//         int mid=(lo+hi)/2;
//         if(arr[mid]==x){
//             if(arr[mid]==0){
//             flag=true;
//             cout<<mid;
//             break;
//             }
//             else if(arr[mid-1]==x){
//                 hi=mid-1;
//             }
//             else{
//                 flag=true;
//                 cout<<n-mid;
//                 break;
               
//             }
//         }
//         else if(arr[mid]>x){
//             hi=mid-1;
//         }
//         else{
//             lo=mid+1;
//         }
        
//     } 
//     if(flag==false)cout<<-1;
   
// }


// find the repeated element
// #include<iostream>
// using namespace std ;
// int main(){
//     int arr[8]={1,2,3,4,5,5,6,7};
//     int n=8;
//     int lo=0;
//     int hi=n-1;
//     int ans=0;
//     while(lo<=hi){
//         int mid=(lo+hi)/2;
//         if(arr[mid]=mid+1){
//             lo=mid+1;
//             ans=arr[mid];
            
//         }
//         else if(arr[mid]==mid){
//             if(arr[mid]!=mid){
//             hi=mid-1;}
//         }
//         else{
//             ans=mid;
//             break;
//         }
//     }cout<<ans;
// }


// ///////////////////////////////////
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,4,5,6,7};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     //binary search;
//     int lo=0;
//     int hi=n-1;
//     while(lo<=hi){
//         int mid=(lo+hi)/2;
//         if(arr[mid]==mid+1){
//             lo=mid+1;
//         }
//         else if(arr[mid]==mid){
//             if(arr[mid-1]==arr[mid]){
//                 cout<<arr[mid];
//                 break;
//             }
//             else{
//                 hi=mid-1;
//             }
//         }
//         // else {
//         //     cout<<"hdhsd";
//         // }
//     }
// }


////////////////////////////////////////
