#include<iostream>
using namespace std;
int main() {

    //make a variable in which i wanna store the values or elements of array
    //syntax to declare--> variable_name[]={here put elements which you wanna store and separate via comma}


    int arr[]={23,11,20,8,4,31,16,26,9};
    
    for(int j=0;j<sizeof(arr)/4;j++) {      //index call karte hain than value aati hai
        cout<<arr[j]<<" ";
    }   

    cout<<endl;

    for(int i : arr) {  // direct value hi aati hai index nahi
        cout<<i<<" ";
    }
}