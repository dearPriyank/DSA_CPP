#include<iostream>
using namespace std;

int main() {

    int N;
    cout << "Please Enter a number"<< endl;
    cin >> N;
    if(N % 3 == 0 && N % 5 == 0) { 
    cout<<N<<" is divisible by both 3 and 5";
    }
    else if(N%3==0 && N%5!=0) {
        cout<<N<<" is divisible 3";    
    }
    else if(N%5==0 && N%3!=0) {
        cout<<N<<" is divisible 5";
    }
    else cout<<N<<" is neither divisible by 3 nor by 5";  
}