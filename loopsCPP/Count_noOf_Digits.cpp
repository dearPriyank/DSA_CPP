#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int count_digits=0;
    for(;n!=0;n=n/10) {
    count_digits++;
    } cout<<count_digits<<endl;

}