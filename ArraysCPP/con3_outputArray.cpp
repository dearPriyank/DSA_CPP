#include<iostream>
using namespace std;
int main() {
    //int arr[10]={}; //isme 10 space pe 0 aayega

    int arr[10]={23,32,26,43,54,45,21}; //jyada size dall sakte hai actual se but kam nhi
    // yaha per maine size actual size se bada diya so excess space pe 0 aa jaayega
    int n=sizeof(arr)/4;
    
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
    
}