#include<iostream>
using namespace std;
int main() {
    int a;
    cout<<"a:"<<endl;
    cin>>a;
    int d;
    cout<<"d:"<<endl;
    cin>>d;
    int n;
    cout<<"enter n:";
    cin>>n;
    for(int i=1;i<=n;i++)
    cout<<a+(i-1)*d<<endl;

}
