//we have to merge to already sorted arrays to another values which should be sorted

#include<iostream>
using namespace std;
int main() {
    int a[]={1,2,4,6,8,9,11};
    int b[]={3,5,7,10,12};
    int i=0,j=0,k=0;       //init values should be 0 bcz we have to use it as index number
    int n=sizeof(a)/4;
    int m=sizeof(b)/4;
    int c[n+m];         //
    while(i<n && j<m){
        if(a[i]<b[j]) c[k++]=a[i++];        // c[k]=a[i] ; k++;i++ it can also be written as
                                                // c[k++]=a[i++];
        else c[k++]=b[j++];
    }
    while(i<n) c[k++]=a[i++];          //if(i<n) {while(i<n) c[k++]=a[i++];}     
    while(j<m) c[k++]=b[j++];            //else {while(j<m) c[k++]=b[j++];}  it can also be
                                        // written as  while(i<n) c[k++]=a[i++];    
                                                    // while(j<m) c[k++]=b[j++];
    for(int f=0;f<n+m;f++){
        cout<<c[f]<<" ";
    }
}