#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int nsp=2*(n-1)-1;
    int c=nsp;
     for(int i=1;i<=n-1;i++) {   
         for(int j=1;j<=i;j++) {
             cout<<"* ";
         }
         for(int k=nsp;k>=1;k--) {
             cout<<"  ";
         }
         for(int l=1;l<=i;l++) {
         cout<<"* ";
         } 
         cout<<endl; nsp-=2;
    } 
    for(int d=1;d<=2*n-1;d++){cout<<"* ";} cout<<endl;
    for(int k=n-1;k>=1;k--){
        for(int i=1;i<=k;i++){
        cout<<"* ";
    } 
        for(int j=1;j<=nsp+2;j++) {
            cout<<"  ";
        }
        for(int l=1;l<=k;l++) {
            cout<<"* ";
        }    nsp+=2;
        cout<<endl;
    } 
    
}
