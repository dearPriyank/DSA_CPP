#include<iostream>
using namespace std;
int main() {
    char character;
    cout <<"enter characcter"<<endl;
    cin >> character;

//using switch case

switch (character) {
    case 'a':
    case 'e':
    case 'i':  
    case 'o':  
    case 'u':
    cout <<"vowel";
    break ;
    default :
    cout <<"consonent";
 }
 return 0 ;
}