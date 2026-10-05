#include<iostream>
using namespace std;
void operation(int &a,int &b, int &add, int &modulus) {
                //--> giving whole value from main function to a ,b add and modulus
    add=a+b;    //--> altering value of additon 
    modulus=a%b;  //--> altering value of modulus
                    //--> both altered value of add and modulus will store in main
                    // function's add and modulus variable
                    // and than those value will be printed as output
}

int main() {
    int x;
    cin>>x;
    int y;
    cin>>y;
    int add,modulus;

    operation(x,y,add,modulus);  //--> giving values to void function
    cout<<"addition "<<add<<endl;
    cout<<"modulus "<<modulus<<endl;
}