#include<iostream>
using namespace std;
int main() {
    int arr[]={23,11,20,12,11,24,56,54,65};
    int n=sizeof(arr)/4;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        
    }
    cout<<sum;
}