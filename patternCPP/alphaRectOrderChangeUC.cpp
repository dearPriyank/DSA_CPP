#include<iostream>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            cout<<(char)(i+64)<<" ";
            //ye uapar waali line me bas change hai aur wahi order change kar raha hai.
        }
        cout<<endl;
    }
}