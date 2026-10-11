#include <iostream>
using namespace std;
void reverse(int arr[],int n){       //it is made only to print the final array  
    cout<<"reversed array= ";        
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
     cout<<endl;
}
int main() {
    int arr[] = {1,4,3,2,6,5};
    int n=sizeof(arr)/4;
    int i=0;    // 0 se start kiya indexing
    int j=n-1;      //n-1 se indexing start kiya hai and ye kam hota jaayega
for(;i<j;){
    swap(arr[i],arr[j]);  //swap keyword is used to exchange values each other
    i++;
    j--;
    }   
    reverse(arr , n); 
}
