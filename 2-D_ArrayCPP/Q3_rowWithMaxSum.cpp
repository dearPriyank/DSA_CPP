#include<iostream>
using namespace std;
int main() {
    int maxRow; //--> we will put which row has max sum of elements
                // INT_MIN--> it represents lowest integer value of int data type
                // INT_MAX--> higest integer value of int data type
    int maxSum=INT_MIN; //it is used to compare to the sum of row 
                        //INT_MIN= -2147483647 approx this integer is stored in int_min keyword
    int brr[][4] ={{1,2,3,4},{5,6,7,8},{9,2,1,4}};
    for(int i=0;i<3;i++){  
        int sum=0;     
        for(int j=0;j<4;j++){       
        sum+=brr[i][j];
        }
        //check whether calculated sum is greater than the minimum value
        if(sum>maxSum){ maxSum=sum; //if it is true than value will get stored in maxSum
        maxRow=i;   //i is row number so maxRow will contain row num
    }
    } cout<<maxRow<<" "<<maxSum;

}