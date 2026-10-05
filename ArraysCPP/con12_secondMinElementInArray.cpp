#include<iostream>
using namespace std;
int main() {
    // int arr[]={23,34,12,56,67,29,54,97,26,51};
    // int n=sizeof(arr)/4;
    // int mn=INT_MAX;
    // for(int i=0;i<n;i++){
    //     mn=min(mn,arr[i]);
    // }
    // int smx=INT_MAX;
    // for(int j=0;j<n;j++){
    //     if(arr[j]<smx && arr[j]!=mn)
    //     smx=arr[j];
    // } cout<<smx<<" is second minimum value in array";
//}
int arr[]={23,34,12,56,67,29,54,97,26,51};
    int n=sizeof(arr)/4;
    int mn=INT_MAX;
    for(int i=0;i<n;i++){
        mn=min(mn,arr[i]);
    }
    int smn=INT_MAX;
    for(int j=0;j<n;j++){
        if( arr[j]==mn) continue;
        if(smn>arr[j]) smn=arr[j];
    } cout<<smn<<" is second minimum value in array";}