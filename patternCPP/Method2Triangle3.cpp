#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n-i;j++) {
            //yaha n-i+1 me -1 kiya hai bcz space i==n par bhi aayega so usse hatane ke liye -1 kiya hai
            cout<<"  ";
       }
         for(int k=1;k<=i;k++) {
             cout<<"* ";
         }
         cout<<endl;
    } 
}