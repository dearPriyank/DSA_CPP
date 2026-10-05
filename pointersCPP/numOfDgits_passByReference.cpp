#include<iostream>
using namespace std;

void count(int a,int* p) { //b ki value ko *p ne store kiya and ab jitne baar bhi void me 
                            //for loop chalega *p value ko store karega and b me update kar dega.
    int i=0;
    i=0 ? 1:0;  // ternary operator used as if else.--> it will count zero also
    
    for(;a!=0;){
i++;
a/=10;
} *p=i;
}
int main(){
    int n;
    cin>>n;
    int b=0; 
    count(n,&b);
    cout<<b;
}