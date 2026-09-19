#include<iostream>

using namespace std;

int main() {
    int trafficStatus;
    cout<<"enter traffic light num"<<endl;
    cin>>trafficStatus;

    switch(trafficStatus) {

        case 1:
        cout<<"red signal =>STOP "<<endl;
        break;
        case 2:
        cout<<"yellow signal =>WAIT"<<endl;
        break;
        case 3:
        cout<<"green signal =>GO"<<endl;
        break;
        default:
        cout<<"your input is invalid";

    }

}