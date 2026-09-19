#include<iostream>
using namespace std;
int main() {
    char character;
    int a,b;
    cout<<"enter a ="<<endl;
    cin>>a;
    cout<<"enter b="<<endl;
    cin>>b;
    cout<<"enter character"<<endl;
    cin>>character;
    switch(character) {
    case'+':
    cout <<"the value will be "<< a+b<<endl;
    break; 
    case'-': 
    cout <<"the value will be "<< a-b<<endl;
    break;
    case'*':
    cout <<"the value will be "<< a*b<<endl;
    break;
    case'%':
    cout <<"the value will be "<<a%b<<endl;
    break;
    case'/':
    cout <<"the value will be "<<a/b<<endl;
    break;
    default:
    cout <<"invalid operator ";
    break;

    }

return 0;

}