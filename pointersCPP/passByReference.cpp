#include<iostream>
using namespace std;
void value(int* ptr){
    *ptr=23;   
}
int main(){
    int x=11;
    value(&x);// value ko call lagaya and usme &x mtlb x ka address bhejha
                //than address ko recive pointer datatype (int* ptr) ne kiya
                //ab *ptr laga ke value change ki --> dereference opeerator use kiya
                //jisse ki x ki value 11 se 23 ho gayi. and 23 print ho gaya
    cout<<x;
}
