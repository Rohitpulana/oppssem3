#include<iostream>
using namespace std ;
int main(){
    int arr[]={4,5,1,3,2};
    int n=5;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    //insertion sort 
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
                j--;
        }
    }
    cout<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    
}