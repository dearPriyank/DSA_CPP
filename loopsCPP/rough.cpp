#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int revNum=0;
   for(int i=1;i<=n;i++) {
    revNum=n%10+revNum*10;
    n/=10;
   } cout<<revNum;
}