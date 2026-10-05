#include<iostream>
using namespace std;
int main() {
    int N;
    cin>>N;
    int original=N;
    int rev=0;

    for( ;N!=0; ) { 
        rev*=10;
        rev+=N%10;
        N/=10;
    } 
    
    if (rev==original) cout<<"Palindrome";

    else cout<<"Not Palindrome";
}