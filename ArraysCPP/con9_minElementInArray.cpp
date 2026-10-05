#include<iostream>
using namespace std;
int main(){
    // for positive number only
int arr[] = {23, 34, 43, 23, 11, 56, 78};
    

int n = sizeof(arr)/4 ;

int min = arr[0];

for(int i = 1; i < n; i++) {
    if(arr[i] < min)
        min = arr[i];
}

cout << min;}

   //#include<climits>
    //for negative number
    // int arr[]={-23,-34,-43,-24,-11,-56,-78};
    // int n=sizeof(arr)/4;
    //          int min=INT_MAX;  //minimum integer value in array
    //         for(int i=0;i<n;i++) {
    //             if(min>arr[i])
    //             min=arr[i];
    //         } cout<<min;
            
    //     }
//------------------OR----------------
// int arr[]={-23,-34,-43,-24,-11,-56,-78};
    // int n=sizeof(arr)/4;
// int min=arr[0];
// for(int i=0;i<n;i++) {
    // if(arr[i]<min) 
    // min=arr[i];
// // } cout<<min;
//}