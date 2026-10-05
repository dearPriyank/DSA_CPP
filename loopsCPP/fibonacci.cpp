#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    int a=0, b=1;
    for(int i=1;i<=n;i++) {
        cout<<a<<" ";
        int c;
        c=a+b; // next = sum of preceding two num;
                // start from two no and i give them values also a=0 and b=1 
                //these are two numbers who come first in series
                // now make a variable which will further calculte thier sum 
    a=b; //after printing a=0 now we are assigning next value to a which was earlier stored in b
    b=c;    // after giving value of b to a , now b will get next value 
            //which is stored in c so now b will get that value 
                //now new value of a and b go to c=a+b and give new value to c 
                // and so onnnnn.........
        
    } 
}