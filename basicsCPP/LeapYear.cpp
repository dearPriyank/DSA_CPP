#include<iostream>
using namespace std;
int main() {
    int year;
    cout<<"enter year: ";
    cin>>year;
    //year divisible by 4---Leap year
    //year divisible by 400---Leap year
    // But , year divisible by 100--not a leap year---exception

    if(year%400==0||year%4==0 && year%100!=0) {
        cout<<year<<" is a Leap year. ";
    } else {
        cout<<year<<" is not a Leap year. ";
    }
}