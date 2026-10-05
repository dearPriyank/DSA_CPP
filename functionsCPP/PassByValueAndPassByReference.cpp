#include<iostream>
using namespace std;

void pass_by_value(int a){
                    //-->pass by value is used to print the intitial (actual) value
        //-->here a is reciving a copied value of y and with this value , function's
            //value will be calculated but it will not be printed
            //bcz the pass_by_reference(y) will not be updated so it will print 
            //actual value of y
    a=a*20;
}

void pass_by_reference(int &a){
                //& is used to get original form of x not a copied value of x
                 //-->pass by reference is used to print the value after operation
            //here a is refer to x means (int &a=x) now whatever operation we perform 
            //in this function automatically value will be updated to mainfunction
    a=a+20;
}

int main() {
    int x=10;
    int y=10;

    pass_by_reference(x);
    cout<<"after pass by reference "<<x<<endl;
    
    pass_by_value(y); //local variable value will get first preference for printing out
    cout<<"after pass by value "<<y<<endl;
    
    
}