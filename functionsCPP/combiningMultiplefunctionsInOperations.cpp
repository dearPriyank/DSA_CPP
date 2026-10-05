#include<iostream>
using namespace std;
void sum(int a,int b){
    cout<<"sum = "<<a+b<<endl;
}
void subtraction(int a,int b){
    cout<<"subtraction = "<<a-b<<endl;
}
void product(int a,int b){
    cout<<"product = "<<a*b<<endl;
}
void division(int a,int b){  //using typecasting to get precise answer
    if(b!=0)cout<<"division(a/b) = "<<(float)a/b<<endl;
    else cout<<"not defined";
    if(a!=0)cout<<"division(b/a) = "<<(float)b/a<<endl;
    else cout<<"not defined";
}
void remainder(int a,int b){
    if(b!=0)cout<<"modulus(a%b) = "<<a%b<<endl;
    else cout<<"not defined";
    if(a!=0)cout<<"modulus(b%a) = "<<b%a<<endl;
    else cout<<"not defined";
}
int main(){
    int x,y;  //take two number as input 
    cin>>x>>y; 
//giving a format to user to access what operation he wanna perform
    cout<<"   input format  "<<endl;
    cout<<" addition-> a"<<endl;
    cout<<" subtraction-> b"<<endl;
    cout<<" multiplication-> c"<<endl;
    cout<<" division-> d"<<endl;
    cout<<" remainder-> e"<<endl;
    cout<<" invalid->(other than a-e)"<<endl;
    char choice; 
    cin>>choice;
//it will help to perform a specific operation only 
    switch(choice){
        case 'a':
        sum(x,y) ;
        break;
        case 'b':
        subtraction(x,y) ;
        break;
        case 'c':
        product(x,y) ;
        break;
        case 'd':
        division(x,y) ;
        break;
        case 'e':
        remainder(x,y) ;
        break;
        default :
        cout<<"please enter valid choice character "<<endl;
        cout<<"(alphabet(a-e) are allowed only)";

    }

}