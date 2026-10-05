#include<iostream>
using namespace std;
int a=0; //ek global variable bana liya bcz har jagah need hai iski.
void last(int* ptr){
    
    for(int i=1;i<=*ptr;i++){
        a=*ptr%10;
    } cout<<"last digit is: "<<a<<endl;
    
}
void first(int* ptr1) {
    for(int j=1;j<=*ptr1;j++) {
        a=*ptr1%10+a*10;
        *ptr1/=10;
    } for(int k=1;k<=a;k++){
        a=a%10;
    } cout<<"first digit is: "<<a<<endl;
}

int main() {
    int n;
    cin>>n;
    last(&n);
    first(&n);
}