#include<iostream>
using namespace std;

int main() {
    int a;
    int b;
    int operation;
    cout<<"enter a: "<<endl;
    cin>>a;
    cout<<"enter b:" <<endl;
    cin>>b;
cout<<"enter operation number"<<endl;
cin>>operation;

    switch(operation) {

        case 1:
        cout<<"the value will be:"<<a+b<<endl;
        break;

        case 2:
        cout<<"the value will be"<<a-b<<endl;
        break;

        case 3:
        cout<<"the value will be"<<a*b<<endl;
        break;

        case 4:
        cout<<"the value will be"<<a/b<<endl;
        break;

        case 5:
        cout<<"the value will be"<<a%b<<endl;

        break;

        default:
        cout<<"input is invalid"<<endl;
    } 

















    return 0;
}