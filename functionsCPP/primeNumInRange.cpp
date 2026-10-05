#include<iostream>
using namespace std;
void prime(int a) {
    int prime=0;
for(int i=1;i<=a;i++){
if(i%2!=0 && i%3!=0 && i%5!=0) cout<<i<<" ";

}
}
int main() {
    int n;
    cin>>n;
    prime(n);
}