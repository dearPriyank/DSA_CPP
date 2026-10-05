 int arr[]={23,34,43,23,11,56,78};
    int n=sizeof(arr)/4;
    int min=0;
    for(int i=1;i<=n;i++) {
        if(arr[i]<min) {
        min=arr[i];}
     cout<<min;}
}