#include<iostream>
using namespace std;
int main() {
    int array[]={10,20,30,40,50};
    cout<<"index 2 in array is "<<array[2]<<endl;

    //updating value in given array
    array[0]=99;

    cout<<"Updated array is ";
    for(int i=0;i<sizeof(array)/4;i++) {
        cout<<array[i]<<" ";
    }
    


}