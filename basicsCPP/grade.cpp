#include<iostream>
using namespace std;
int main() {
    int grade;
    cout <<"enter your grade:";
    cin>>grade;

//using if else if case


    if (grade>=90) {
        cout <<"your grade is A";
    }
    else if (grade>=80 && grade<90) {
        cout <<"your grade is B";
    }
    else if (grade>=70 && grade<80) {
        cout <<"your grade is C";
    }
    else if (grade>=60 && grade<70) {
        cout <<"your grade is D";
    }
    else {
        cout <<"your grade is F";
    }
    return 0;
}   