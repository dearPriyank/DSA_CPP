#include<iostream>
using namespace std;
int main(){
    // for positive number only

//     int arr[]={23,34,43,23,11,56,78};
//     int n=sizeof(arr)/4;
//     int Max=0;
//     for(int i=1;i<=n;i++) {
//         if(arr[i]>Max) {
//         Max=arr[i];}
//     } cout<<Max;
// }
   // #include<climits>
    //for negative number
    int arr[]={-23,-34,-43,-24,-11,-56,-78};
    int n=sizeof(arr)/4;
        //     int mx=INT_MIN;  //minimum integer value in array
        //     for(int i=0;i<n;i++) {
        //         if(mx<arr[i])
        //         mx=arr[i];
        //     } cout<<mx;
            
        // }
//------------------OR----------------

// int mAx=arr[0];
// for(int i=0;i<n;i++) {
//     if(arr[i]>mAx) 
//     mAx=arr[i];
// } cout<<mAx;
// }

int mx=INT_MIN; // minimum integer value in array
             for(int i=0;i<n;i++) {
                 
                 
                 mx=max(mx,arr[i]);//max is built in keyword used to get maximumu value
             } cout<<mx;}