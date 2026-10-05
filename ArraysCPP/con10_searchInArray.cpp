#include<iostream>
using namespace std;
int main() {
    int arr[]={23,34,12,56,67,29,54,97,26,51};
    int n;
    cin>>n;
    int f=sizeof(arr)/4;
    bool found;
    for(int i=0;i<f;i++) {
        
        if(arr[i]==n){
            found=true;
            break;
        }
    }  if(found==true) cout<<n<<" exists in array";
       else  cout<<n<<"  doesn't exists in array";
}
