#include<iostream>
using namespace std;
int main() {
    int arr[] = {23, 34, 43, 23, 11, 56, 78};
    int n=sizeof(arr)/4;
    cout<<&arr[0]<<endl;   //0th position waali value ka address hai 
    cout<<&arr[1]<<endl;       // & ko ampercent kehte hai
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
}
// we can simly write arr[0]=arr both are same

//result===> 0x16d86acc0
// 0x16d86acc4
// 0x16d86acc8. ----> we can observe that in address format there is a difference of 4 bytes
// 0x16d86accc


//if i cout normal arr it will give address of zeroth element
