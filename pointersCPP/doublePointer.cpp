#include<iostream>
using namespace std;
int main() {
    int a=10;
    int* ptr=&a;
    int b=(*ptr+=1);
    int** c=&ptr; //double pointer--> ek already pointer ke address ko recieve karne ke liye
                    // data_type** variableName ka use karte hai and value ko dekhne ke liye
                    //**varibleName ka use karte hai
    cout<<a<<" "<<*ptr<<" "<<b<<" "<<**c;
}