#include<iostream>
using namespace std;

//function overloading means giving same variable name to int and float data type

int addition(int a,int b){    //--> function for integer values aadition
    return a+b;  //-->returning final value after additon to main function
}

float addition(float a, float b){    //--> function for decimal values addition
    return a+b;  //-->returning final value after addition to main function
}

int main(){
    int x,y ;      //-->taking values to send to int function
    cin>>x>>y;
    
    float i,j;     //-->taking values to send to float function
    cin>>i>>j;
    
    cout<<addition(x,y)<<endl; 
                    //--> giving the value which we got from int function as output
    
    cout<<addition(i,j);
                    //--> giving the value which we got from int function as output
}