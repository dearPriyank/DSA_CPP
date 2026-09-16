#include<iostream>
using namespace std;
int main() {
    int a;
    cout<<"enter a: ";
    cin>>a;
    int b;
    cout<<"enter b: ";
    cin>>b;
    int value=1;

    for(int i=1;i<=b;i++) {
        value=value*a;

    } cout<<value;
}