#include<iostream>
using namespace std;
void power(int base,int expo=2){ //here expo has default value 2 
                                    //if i don't put any value of expo then
                                    //autumatically it will take expo =2.
    int result=1;
    for(int i=1;i<=expo;i++)
    result*=base;
    cout<<result<<endl;
}
int main(){
    int a,b;
    cin>>a>>b;
    power(5);
    power(a,b);
}