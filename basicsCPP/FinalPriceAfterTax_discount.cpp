#include<iostream>
using namespace std;
int main() {
    float originalPrice;
    cout<<"enter original price of item :"<<endl;
    cin>>originalPrice;

    float disPercent;
    cout<<"enter discount percent:"<<endl;
    cin>>disPercent;

    float taxPercent;
    cout<<"enter tax percent :"<<endl;
    cin>>taxPercent;

    float discountedAmount = originalPrice-originalPrice*(disPercent/100) ;
    cout<<"Discounted price  "<<discountedAmount<<endl;
    float payableAmount;
    payableAmount=((discountedAmount)*taxPercent/100) + discountedAmount;
    cout<<"Final price  "<<payableAmount<<endl;

}