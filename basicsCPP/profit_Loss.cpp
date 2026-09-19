#include<iostream>
using namespace std;

int main() {
int sp;
int cp;
    
    cout<<"enter sp"<<endl;
  cin>>sp;

  /*if you want to enter sp and cp one by one follow this format 
  if you don't write cin and cout like this seperately you have to enter both sp and cp at same time. */

    cout<<"enter cp"<<endl;

  
    cin>>cp;

    if(sp>cp) {

        cout <<"congrats for profit"<<endl;

    }
    else {

        cout<<"sorry for loss";

    }
    
    return 0;

}