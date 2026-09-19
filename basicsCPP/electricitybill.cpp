#include<iostream>
using namespace std;
int main() {
    int unit;
    cin>>unit;
    cout<<"your electricity bill is:"<<endl;


//using if else if case


    if(unit<=100) {
        cout<<unit*5;
    }           
    else if(unit>100 && unit<=200) {
        cout<<unit*7;
    }
    else if(unit>200 && unit<=300) {
        cout<<unit*10;
    }
    else {
        cout<<unit*15;
    }
    return 0;
}   