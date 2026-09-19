#include<iostream>
using namespace std;
int main() {
    //so pointer is basically a way to store address of particular value.

    //pointer data type is denoted as --> data_type* pointerName=&varibleName--> syntax.
    //use * after dataType then it will tell you address where the value has stored.
    //to know address of variableName use &variblenName.
     int a=4;
     int*ptr=&a;
     cout<<ptr<<endl;
    //0x16f62eccc --> this is address of a=4 it will be unique always but it wiil change at every run.
char value='A';
char*address=&value;
cout<<address;
//A0��o -->this is. address of value='A'
}