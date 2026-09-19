#include<iostream>
using namespace std;
int main() {
    int day;
    cout <<"enter day"<<endl;
    cin >> day;

// we're using switch case in this

    switch (day) {
        case 0:
        cout <<"sunday";
        break;
        case 1:
        cout <<"monday";
        break;
        case 2:
        cout <<"tuesday";           
        break;
        case 3:
        cout <<"wednesday";
        break;
        case 4:
        cout <<"thursday";
        break;
        case 5:
        cout <<"friday";
        break;
        case 6:
        cout <<"saturday";
        break;  
        default:
        cout<<"invalid response";
        break;
      
    }
return 0;
}