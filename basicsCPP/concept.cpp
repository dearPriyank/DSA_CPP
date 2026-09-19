/* type casting in c++ is used to convert one data type into another data type. There are two types of type casting in c++: implicit and explicit.
bool=1byte
char=1byte
short=2bytes
int=4bytes
long=4bytes
float=4bytes
long long=8bytes
double=8bytes   
implicit type casting
>>>>it is done automatically by the compiler when a value of one data type is assigned to a variable of another data type. For example, if you assign an int value to a float variable, the compiler will automatically convert the int to a float.
small d.t to large d.t
Explicit type casting
>>>>it is done manually by the programmer using a cast operator. For example, if you
large d.t to small d.t*/


#include<iostream>
using namespace std;
int main() {
//char a='A';
//int A=23;
//float z=A;
//cout<<z<<endl;


//implicit type casting
 char a='c';
 double b=a;
cout<<b<<endl;

//explicit type casting
double d=23.112008;
int c=(int)d;
cout<<c<<endl;

/* 




*/






}