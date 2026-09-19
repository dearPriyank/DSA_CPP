#include<iostream>
using namespace std;
int main() {
    int day ,month ,year;
    cin>> day >> month >> year ;

    int NumOfDays;
    // bounding months and years format
    if(month<=12 && month>=1 && year>999 && year<10000) {
        //exeption--for leap year
        if(month==2) {
            //leap year condition
            if(year%400 || (year%4==0 || year%100!=0)) NumOfDays=29;
            else NumOfDays=28;
        } //four months of 30 days
        else if(month==4||month==6||month==9||month==11) NumOfDays=30;
        //six months of 31 days      
        else NumOfDays=31;
        cout<<"VALID DATE";
    }
    else cout<<"INVALID DATE";
}