#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter array size: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter array elements: "<<endl;
    //input liya i--> position hai ye jo loop se chage hogi and we have to fill those positions
    for(int i=0;i<=n-1;i++) {
        cin>>arr[i];
    }
    //print the negative element of array only
    for(int j=0;j<=n-1;j++) {
        if(arr[j]<0) cout<<arr[j]<<" ";
    }
    for(int k=0;k<=n-1;k++) {
        if(arr[k]>=0) cout<<arr[k]<<" ";
    }
}