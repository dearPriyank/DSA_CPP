#include<iostream>
using namespace std;

//void function will take array and two variables and it will just swap the values of array
void  rotate(int array[] , int a ,int b){
    for(;a<b;){
        swap(array[a],array[b]);
        a++,b--;  
//since a will increse bcz it starts from 0 and b will decrease bcz it starts from n-1
    } 
}
int main() {
int array[]={1,2,3,4,5};
int n=sizeof(array)/4;
int d=2; 
int a=0;    
int b=n-1;
rotate(array,a,d-1);    //a to d-1 will be rotated
rotate(array,d,b);      //now d to b will be rotated
rotate(array,a,b);      //finally a to b will be rotated

//printing final array 
cout<<"final array is--> ";
for(int i=0;i<n;i++){
    
        cout<<array[i]<<" ";
    }
}