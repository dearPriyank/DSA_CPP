#include<iostream>

using namespace std;
int main() {
    vector<int> arr = {22,65,8,7,98,39,87,2,10,4};
    
    int n=arr.size();
    reverse(arr.begin(),arr.end());
    
    for(int j=0;j<=n-1;j++){
    cout<<arr[j]<<" ";
    
    }  
 

    
}