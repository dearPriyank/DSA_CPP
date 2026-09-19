#include<iostream>
using namespace std;
int main() {
    float weight;
    cout<<"enter your weight in Kg: ";
    cin>>weight;

    float height;
    cout<<"enter your height in Meter: ";
    cin>>height;

    if(float BMI=weight/(height*height)) {

        if(BMI<18.5) cout<<"BMI: "<<BMI<<endl<<"Category: UNDERWEIGHT";

        else if(BMI>=18.5 && BMI<=24.9) cout<<"BMI: "<<BMI<<endl<<"Category: NORMAL WEIGHT";
        

        else if(BMI>=25 && BMI<=29.9) cout<<"BMI: "<<BMI<<endl<<"Category: OVERWEIGHT";

        else cout<<"BMI: "<<BMI<<endl<<"Category: OBESE";
    } 
    
}