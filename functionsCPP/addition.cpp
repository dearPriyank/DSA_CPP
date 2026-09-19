#include<iostream>
using namespace std;
int sum(int x,int y){ 
    return x+y;
} //in int function we have to use return , it is used to break the function.
int product(int a,int b){
    return a*b;
}
int main() {
    cout<<sum(23,11)<<endl;
    cout<<::product(23,11);
}
// in void function its not compeltion to put return keyword.