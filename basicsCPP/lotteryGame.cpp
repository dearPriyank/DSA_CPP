#include<iostream>
using namespace std;
int main() {
    int num;
    cout<<"enter num"<<endl;
    cin>>num;
    if(num>=300&&num<=460) { 
    cout<<"congrats, you won a macbook"<<endl;
if(num>=300&&num<=380)
cout<<"and ,you will get M1 mac "<<endl;
else
cout<<"and ,you will get M2 mac"<<endl;     
}
    else if(num>=200 && num<=280) {
    cout<<"congrats, you won pack of kurkure"<<endl;

    if(num>=200&&num<=240)
    cout<<"your kurkure flavor is Chilli kurkure"<<endl;
    else 
    cout<<"your kurkure flavor is onion kurkure"<<endl;
}
    else if(num>=1100 && num<=1500) {
    cout<<"congrats, you won a cycle"<<endl;
    if(num>=1100&&num<=1300)
    cout<<"cycle brand:Avon cycle"<<endl;
    else 
    cout<<"cycle brand:Hero cycle"<<endl;


}
    else if (num>50&&num<=80) {
    cout<<"congrats , you won a bike"<<endl;
if(num>50&&num<=65)
cout<<"your bike model=Bullet"<<endl;
else
cout<<"your bike model=Rajdoot"<<endl;    



}
    else 
    cout<<"congrats, you are at the edge of BANKRUPTCY"<<endl;
}