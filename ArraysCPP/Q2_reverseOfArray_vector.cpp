#include <iostream>
#include<vector>
using namespace std;
void print(vector<int> &arr){
    for(int i : arr)
        cout<<i<<" ";
     cout<<endl;
}
int main() {
    vector<int> arr = {22,65,8,7,98,39,87,2,10,4};
    print(arr);
    int n=arr.size();
    int i=0;    //agar index 1 se 3 tak chalana hai than i=1; and j=3 kar do
    int j=n-1;

    for(;i<j;){
    swap(arr[i],arr[j]);
    i++;
    j--;
    }  
    print(arr); 
    
}