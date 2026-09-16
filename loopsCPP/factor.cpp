#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"n:";
    cin>>n;
    for(int i=1;i<=sqrt(n);i++) { //sqrt(n) only 1to 9 tak ke factors ko rakhega
        if(n%i==0) {
            cout<<i<<endl;
            cout<<n/i<<endl;
        }
    }
}