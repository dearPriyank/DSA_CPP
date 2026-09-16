#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter n:";
    cin>>n;
    bool is_it;
    for(int i=2;i<=n-1;i++) {
        if(n%i==0) {
            is_it=true;
            break;
        }
     } if(n==1) 
     cout<<"number is niether prime nor composite"; 
    else if(is_it==true)
    cout<<"composite number";
    else {
        cout<<"prime number";
    }
}