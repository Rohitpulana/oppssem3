#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
int arr[]={5,3,4,1,2};
int n=5;
vector <int> v(5);
// for(int i=0;i<n;i++){
//     v[i]=arr[i];

// }
for(int ele: arr){
    cout<<ele<<" ";
}
cout<<endl;

///////////////////////////////////////////////////
// selection  sort
for(int i=0;i<n-1;i++){
    int min=INT_MAX;
    int mindx= -1;
    //minimum element calculation in oragnge box 
    for(int j=i;j<n;j++){
        if(arr[j]<min){
            min=arr[j];
            mindx=j;
        }
    }
    swap(arr[i],arr[mindx]);
}
for(int ele: arr){
    cout<<ele<<" ";
}
cout<<endl;


}