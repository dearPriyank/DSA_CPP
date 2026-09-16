#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int j=1;j<=2*n-1;j++) { 
        
        cout<<"* ";
    } //ek line n me se hamne pehle hi likh li hai so ab ham baaki code n-1 par karenge bcz one 
    //line we have already written
    cout<<endl;
  for(int i=1;i<=n-1;i++) {
    for(int a=1;a<=n-i;a++) {
        cout<<"* ";
    }
    for(int b=1;b<=2*i-1;b++) {
        cout<<"  ";
    }
    for(int c=1;c<=n-i;c++) {
        cout<<"* ";
    }
    cout<<endl;
  }
}