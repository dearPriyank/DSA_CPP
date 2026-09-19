#include<iostream>
using namespace std;
int main(){
    int a=23;
    int* ptr=&a;
    cout<<*ptr<<endl; //--> here *ptr is used to dereference the address as insted of giving
                // address due to *variable name it had give value of that varible name.

    // we can also change the value of a as...
    // by changing value of *variableName.

    *ptr=10;//x=10
    cout<<*ptr<<endl;

    //also we can do this
    // we can do operations also
    *ptr+=6;//latest wali value me + hoga
    cout<<*ptr;



}
