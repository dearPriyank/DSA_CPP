#include<iostream>
using namespace std;
int main() {
    // int arr[]={23,34,12,56,67,29,54,97,26,51};
    // int n=sizeof(arr)/4;
    // int mx=INT_MIN;
    // for(int i=0;i<n;i++){
    //     mx=max(mx,arr[i]);
    // }
    // int smx=INT_MIN;
    // for(int j=0;j<n;j++){
    //     if(arr[j]>smx && arr[j]!=mx)
    //     smx=arr[j];
    // } cout<<smx<<" is second maximum value in array";
//}
int arr[]={23,34,12,56,67,29,54,97,26,51};
    int n=sizeof(arr)/4;
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
    }
    int smx=INT_MIN;
    for(int j=0;j<n;j++){
        if(arr[j]==mx) continue;
        if(smx<arr[j]) smx=arr[j];
    } cout<<smx<<" is second maximum value in array";}