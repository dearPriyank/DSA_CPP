#include<iostream>
using namespace std;
int main() {
    int arr[10]={-23,32,-26,-43,54,-45,-21};
for(int i=0;i<sizeof(arr)/4;i++){
    if(arr[i]<0){
        cout<<arr[i]<<" ";
    }
}
}