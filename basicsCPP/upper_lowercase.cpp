#include<iostream>
using namespace std;
int main() {

    char character;

    cout <<"enter character"<<endl;
    cin>>character;

    if(character >=A && character=<Z ) {
        cout<<"uppercase"<<endl;

    } else if(character>=a && character=<z) {
        cout<<"lowercase"<<endl;

    } else {
        cout<<"input is invalid"<<endl;

    }
    
return 0;

}