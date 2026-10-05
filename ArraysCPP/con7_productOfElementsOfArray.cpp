#include<iostream>
using namespace std;
int main(){
    int arr[]={23,43,/*34,38,30*/};
    int n=sizeof(arr)/4;
    int product=1;
    for(int i=0;i<n;i++) {
        product*=arr[i];
    } 
    cout<<product;
}