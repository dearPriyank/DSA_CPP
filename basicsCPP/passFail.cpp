#include<iostream>
using namespace std;
int main() {

    float percentage;

    cout <<"enter your percentage"<<endl;
    cin >>percentage;

//using nested if case 



    if (percentage>=33) {
        if (percentage>=80) {
            cout <<"excellent dear";
        
        } else { 
            cout <<"good bro";
        }

    } else {
        cout <<"sorry you're fail";
    }

    return 0;
}