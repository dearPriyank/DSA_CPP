#include<iostream>
using namespace std;
int main() {
    int N;
    cout<<"enter n:";
    cin>>N;
    bool is_it_prime=true; 
    for(int i=2;i*i<=N;i++) {
        if(N%i==0) {
            is_it_prime=false;
            break;
        }
     } if(N==1) {
     cout<<"number is niether prime nor composite"; 
    
    } else if(is_it_prime==false){
    cout<<N<<" is a composite number";
    
    } else {
        cout<<N<<" is a prime number";
    }
}