#include<iostream>
using namespace std;
int value(int a) {
    int f=1;
    for(int i=1;i<=a;i++) {
        f*=i;
       } return f;  
}
int ncr(int n,int r) {
    int fact=value(n)/(value(r)*value(n-r));
     return fact;
}
int main() {
    int b;
    cin>>b;
for(int j=0;j<=b;j++) {
    for(int l=1;l<=b-j;l++) {
        cout<<"  ";
    }
    for(int k=0;k<=j;k++) {
        cout<<ncr(j,k)<<"   ";
    }
    cout<<endl;
}
}