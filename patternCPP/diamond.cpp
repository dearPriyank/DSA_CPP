#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int nsp=n-1;
    int nst=1;
    //for(int a=1;a<=n;a++)
    //{
    for(int i=1;i<=n;i++) {
       // nsp=n-1;
        for(int j=1;j<=nsp;j++) {
            cout<<"  ";
        }
        //nst=2*n-1;
        for(int k=1;k<=nst;k++) {
            cout<<"* ";
        } nst+=2;
        nsp--;

        cout<<endl; }
        int nsta=2*n-3;
        int nspa=1;
        for (int i=1;i<=n-1;i++) {
            
            for(int j=1;j<=nspa;j++) {
                cout<<"  ";
            }
            
            for(int k=1;k<=nsta;k++) {
                cout<<"* ";
            }
            nsta-=2;
            nspa++;
           cout<<endl;
        } 
        
    } //} 
