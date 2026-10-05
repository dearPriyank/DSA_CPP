#include<iostream>
using namespace std;
void change(int y[]){    //yaha y[] x ke 0th position ka address recieve karega
                //here there is no array is created but array x has been changed and it becomes y
                //here array x is sending address to y and further y updated a particular value 
    y[0]=46;  //by pass by reference ye original array me 0th position ki value ko chage kar raha hai

                //array ko function me bhejte hai to uska address hi jata hai
                // and here y kuch nhi balki x array hi hai
                //---> it is passed by reference 
}
int main() {
    int x[] = {23, 34, 43, 23, 11, 56, 78};
    change(x);  //--> yaha par x[0] ka address gaya hai-->yaha &x[0] gaya hai
    cout<<"altered value is "<<x[0]<<endl;
    
    cout<<"now final array becomes ";
    for(int i=0;i<sizeof(x)/4;i++){
    cout<<x[i]<<" ";
}
    
}