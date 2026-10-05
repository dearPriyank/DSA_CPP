#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int Rev_num=0;
    for(;n!=0;) {
        Rev_num=Rev_num*10+n%10;
        
        n=n/10;
    } cout<<Rev_num<<endl;

}