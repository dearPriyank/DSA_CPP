#include<iostream>
using namespace std;
int main() {
    int arr[26];
    int c;
    arr[0]=23;
    arr[25]=11;
    c=arr[0];
    arr[0]=arr[25];
    arr[25]=c;
    cout<<arr[0]<<" "<<arr[25];
}