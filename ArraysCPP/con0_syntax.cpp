#include<iostream>
using namespace std;                                                                                                                                                                           
int main(){
    int arr[]={23,11,20,8,26}; // eksath kai saari values ko define kiya
                // value --> |23| 11| 20| 8| 26|
                //position-> | 0|  1|  2| 3|  4|
    cout<<arr[1]<<endl; //here in [position] this we put position.

    arr[3]=90; //value updation
    cout<<arr[3]<<endl;

    cin>>arr[2]; // here we are taking input and updating it
    cout<<arr[2]<<endl;

    //we can chhange data type  of array also.

//------------------------  SIZEOF concept---------  
                // bool=1byte
                // char=1byte
                // short=2bytes
                // int=4bytes
                // long=4bytes
                // float=4bytes
                // long long=8bytes
                // double=8bytes
    cout<<sizeof(arr);
                // since we have used int datatype and its size is 4byte for each element 
                // so for total 5 element it will be 5*4=20 bytes

    // size keyword jo hai wo total no of value /elements batata hai 







    
}

