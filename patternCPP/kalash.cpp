#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    
    for(int j=1;j<=n-1;j++){
        cout<<"  ";
    }
    for(int j=1;j<=2;j++){
        cout<<"* ";
    }
    cout<<endl;
    for(int j=1;j<=n-3;j++){
        cout<<"  ";
    }
    for(int j=1;j<=6;j++){
        cout<<"* ";
    }
    cout<<endl;
    for(int j=1;j<=n-1;j++){
        cout<<"  ";
    }
    for(int j=1;j<=2;j++){
        cout<<"* ";
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            cout<<"  ";
        }
        for(int k=1;k<=n-i+1;k+=1){
            cout<<"* ";
        }
        for(int k=1;k<=n-i+1;k+=1){
            cout<<"* ";
        }
        cout<<endl;
    }
    
}