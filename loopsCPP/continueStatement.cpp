#include<iostream>
using namespace std;
int main() {
    int N;
    cin>>N;
    for(int i=1;i<=N;i++) {
        if(i%3==0) continue;  //--> excluding multiple of 3

                // so basically continue is used to skip particular series of values in a loop

        else cout<<i<<" ";
    } 
}