#include<iostream>
#include<string>
using namespace std ;
int main(){
    string arr[]={"raghav","urvi","harsh","vishwa","sanket","manvi","hyder","priya","sudanshu"};
    int n =9;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<=n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }

}