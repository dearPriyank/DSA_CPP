#include<iostream>
using namespace std;
int main() {
    int array[]={10 , 20 , 4 };
    int max=array[0];   //initially max has value of index 0 

    for(int i=0;i<sizeof(array)/4;i++) {
        //now compare every element to max if condition-> true--> value will updated
                                        //condition-> false-> value will remain same 
        if(array[i]>max) {   //it will not happen , if i directly compare to 1st element of array
           max = array[i];   // like for array--> 12,1,4,10,34,25
                        //here if i directly compare 1st elemnt to other
                // like at last second step it will store 34 which is max 
        //but last one is 25 which is also satisfying condition so now max will store 25 instead of 25                                  
        }
    } cout<<"largest element in given array is "<<max<<endl;
}