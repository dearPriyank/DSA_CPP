#include<iostream>
using namespace std;
int main() {
    int a;
    cout<<"a:"<<endl;
    cin>>a;
    int r;
    cout<<"r:"<<endl;
    cin>>r;
    int n;

    cout<<"n:  ";
    cin>>n;
    int t=a;
    for(int i=1;i<=n;i++) {
    cout<<t<<endl;
    t=t*r;}
}