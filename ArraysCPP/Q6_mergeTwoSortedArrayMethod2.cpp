//we have to merge to already sorted arrays to another values which should be sorted

#include<iostream>
using namespace std;
int main() {
    int a[]={1,2,4,6,8,9,11};
    int b[]={3,5,7,10,12};
    int n=sizeof(a)/4;
    int m=sizeof(b)/4;
    int i=n-1,j=m-1,k=m+n-1;       //starting from last values or elements
    int c[n+m];         //n+m size of blank array to store final sorted elements
    while(i>=0 && j>=0){
        if(a[i]>b[j]) c[k--]=a[i--];        // c[k]=a[i] ; k--;i-- it can also be written as
                                                // c[k--]=a[i--];
        else c[k--]=b[j--];
    }
    while(i>=0) c[k--]=a[i--];          
    while(j>=0) c[k--]=b[j--];          

    
    for(int f=0;f<n+m;f++){
        cout<<c[f]<<" ";
    }
}