#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(i<j) cout<<i<<" ";
            else cout<<j<<" ";
        }
        for(int c=n-1;c>=1;c--) {
            if(i<c) cout<<i<<" ";
            else cout<<c<<" ";
        }
        cout<<endl;
        }
    
    for(int a=n-1;a>=1;a--) {
        for(int b=1;b<=n;b++) {
            if(a<b) cout<<a<<" ";
            else cout<<b<<" ";
        }
        for(int d=n-1;d>=1;d--) {
            if(a<d) cout<<a<<" ";
            else cout<<d<<" ";
        }
        cout<<endl;

    }

}
