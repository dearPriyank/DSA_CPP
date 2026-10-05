#include<iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    int* ptr=&a;
    int b=(*ptr+=10);
    int** c=&ptr; //double pointer.
    cout<<*ptr<<" "<<a<<" "<<b<<endl<<**c;
}