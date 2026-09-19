#include<iostream>
using namespace std;
int main() {

   // ----------********ALTA ELIGIBILITY********---------

    int age;
    cout<<"please enter your age:"<<endl;
    cin>>age;
    bool stream;
    cout<<" which stream you had taken in high school?...FOR PCM --Choose 1 , FOR other --choose 0"<<endl;
    cin>>stream;
    if(age>=17 && age<=21 && stream==1) {
        int marks;
        cout<<"please enter your 12th Maths marks (out of 100) "<<endl;
        cin>>marks;
        cout<<"please enter your 12th Physics marks (out of 100) "<<endl;
        cin>>marks;
        float percentage;
        cout<<"please enter your 12th percentage"<<endl;
        cin>>percentage;
        if(marks>=70 && marks<=100 && percentage>=75) {
            cout<<"CONGRATS, you are eligible for ALTA's entrance exam ASAT"<<endl;
        } else {
                cout<<"SORRY, you are not eligible"<<endl;
            } 
    } else {
            cout<<"sorry, you are not permitted to give ASAT"<<endl;
        }   
    }