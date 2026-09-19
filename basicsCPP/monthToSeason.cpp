#include<iostream>
using namespace std;
int main() {
    int month_number;
    cin>>month_number;
    switch(month_number) {
        case 1:
        case 2:
        case 12:
        cout<<"season: WINTER"<<endl;
        break;
        case 3:
        case 4:
        case 5:
        cout<<"season: SPRING"<<endl;
        break;
        case 6:
        case 7:
        case 8:
        cout<<"seson: SUMMER"<<endl;
        break;
        case 9:
        case 10:
        case 11:
        cout<<"season: MONSOON"<<endl;
        break;
        default:
        cout<<"INVALID MONTH"<<endl;

    }
}