#include<iostream>
using namespace std;
int main() {
    float accountBalance;
    int withdrawalAmount;
    cin>>accountBalance>>withdrawalAmount;
    
    bool transaction=
                          //putting conditions in transaction;
    withdrawalAmount>0 && 
    withdrawalAmount%100==0 &&
    accountBalance>= withdrawalAmount + 2;

    cout<<"transaction valid ="<<boolalpha<<transaction<<endl;
    if(transaction==true) {
        cout<<"remaining balance ="<<accountBalance-withdrawalAmount-2;
    } else {
        cout<<"please , enter valid input. "<<endl;
    }
    
}