#include<iostream>
using namespace std;
int main() {
    int array[]={12,35,1,10,34,1};
    int max=array[0];   
    int n=sizeof(array)/4;
    int smax=array[0];
    for(int i=0;i<n;i++) {
                            
        if(array[i]>max) {  
           max = array[i];        //store max elemnt
        }
    for(int j=0;j<n;j++){
        if(max==array[j]) continue;  //now skip that max element , so that now it will store second max element 
        else if(array[i]>smax) smax=array[j];
    }
    } cout<<"second largest element in given array is "<<smax<<endl;
}