#include<iostream>
using namespace std;
int main() {
    int n;
    int sum=0;

    for(;1;){     
         //i used to give condition that if it is true than loop will run otherwise it will give zero
        
         cin>>n;
        if(n<=0) break;
        sum+=n;
    } 
    cout<<"sum before break : "<<sum;
}