#include<iostream>
using namespace std;
int main() {

    int age;
    cout<<"Please enter your age:"<<endl;
    cin>>age;
    if(age>=18 && age<=120) {
        cout<<"you are eligible to have a voter Id"<<endl;
        long long aadharNumber;
        cout<<"Please enter your aadhar number:"<<endl;
        cin>>aadharNumber;
        if(aadharNumber<1000000000000 && aadharNumber>99999999999) {
            cout<<"congrats your registration for voter Id is successful"<<endl;

        } else {
            cout<<"Please enter a valid aadhar number"<<endl;
        }
    }
else {
    cout<<"Sorry you are not eligible"<<endl;

}

}