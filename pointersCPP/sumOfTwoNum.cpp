#include<iostream>
using namespace std;
//void sum(int* p1,int* p2) {
   //cout<<(*p1 + *p2);
    //void me cout karna padta hai kyuki wo khud ek value hai , main se bas input jaata hai
                            //isme cout void me likna padta hai
                            //main func bas call karta hai void ko
  int sum(int* p1,int* p2) {
    return(*p1+*p2);
            //int me return karna padta hai jo ek value main func ko deta hai
}                       //isme cout main func me likhna padta hai
                        //isme main output deta hai call nhi karta return value leta hai int se 
int main() {
    int a;
    cin>>a;
    int b;
    cin>>b;
    cout<<sum(&a,&b);
}