#include<iostream>
using namespace std;
char a='A';//this is global variable it can be used in any functions.
void dear(){
    cout<<a<<endl;
}
int main(){
    cout<<a<<endl;
    dear();
}
