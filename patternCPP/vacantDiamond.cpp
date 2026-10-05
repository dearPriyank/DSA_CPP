#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    cout<<endl;
    int nsp=2*n-1;
    for(int h=1;h<=2*n+1;h++) {cout<<"* ";} cout<<endl;
  for(int i=1;i<=n;i++) {
    for(int a=1;a<=n-i+1;a++) {
        cout<<"* ";
    }
    for(int b=1;b<=2*i-1;b++) {
        cout<<"  ";
    }
    for(int c=1;c<=n-i+1;c++) {
        cout<<"* ";
    }
    cout<<endl;
} for(int i=2;i<=n;i++){
    for(int j=1;j<=i;j++) {
        cout<<"* ";
    }
    for(int b=2*(n-i+1)-1;b>=1;b--) {
         cout<<"  "; nsp-=2;
    }
    for(int c=1;c<=i;c++) {
        cout<<"* ";
    } cout<<endl; 
}
}

