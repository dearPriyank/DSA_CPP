#include<iostream>
using namespace std;
int fact(int a) {
    int value=1;
    for(int i=1;i<=a;i++) 
    value*=i;
    return value;
}
int main() {
    int n;
    int r;
    cin>>n>>r;
    int factorial;
    cout<<(factorial=fact(n)/(fact(r)*fact(n-r)));
    
}