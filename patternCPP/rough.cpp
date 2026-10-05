#include<iostream>
using namespace std;
int main() {
    int n=5,m=3;
    int nsp=2*n-1;
    
    for(int h=1;h<=2*n+1;h++) {cout<<"* ";} cout<<endl;
  for(int i=1;i<=n;i++) {
    for(int a=1;a<=n-i+1;a++) {
        cout<<"* ";
    }
    for(int b=1;b<=2*i-1;b++) {
        cout<<"  ";
    }
    for(int c=1;c<=n-i+1;c++) {
        cout<<"* ";
    }
    cout<<endl;
} for(int i=2;i<=n;i++){
    for(int j=1;j<=i;j++) {
        cout<<"* ";
    }
    for(int b=2*(n-i+1)-1;b>=1;b--) {
         cout<<"  "; nsp-=2;
    }
    for(int c=1;c<=i;c++) {
        cout<<"* ";
    } cout<<endl; 

} 
for(int k=1;k<=1;k++){
    for(int j=1;j<=n-2;j++){cout<<"  ";}
    cout<<endl;
}
       for(int j=1;j<=1;j++){
         cout<<"  "<<endl;
  }
  
    
     
    
        
        for(int i=1;i<=2;i++) {

        for(int j=1;j<=n-i+1;j++) {
            cout<<"  ";
        }
        for(int k=1;k<=2*i-1;k++) {
            cout<<"0 ";
        }
        cout<<endl;
    }
    

    for(int i=2;i<=n+1;i++) {

       

        for(int j=1;j<=m+1;j++) {
            cout<<"  ";
        }
        for(int j=1;j<=m;j++) {
            cout<<"0 ";
        }
        for(int j=1;j<=m;j++) {
            cout<<"  ";
        }
        cout<<endl;
    }
        for(int k=1;k<=2*n;k++){
            if(k==1){cout<<"  ";}
            else {cout<<"0 ";}}
         cout<<endl; 

         for(int i=1;i<=n-2;i++) {

        for(int j=1;j<=m+1;j++) {
            if(j==1) cout<<"  ";
            else cout<<"0 ";
        }
        for(int j=1;j<=m;j++) {
            cout<<"  ";
        } 
        for(int j=1;j<=m;j++) {
            cout<<"0 ";
        }          cout<<endl;  
        
            
        
        }}

   // }