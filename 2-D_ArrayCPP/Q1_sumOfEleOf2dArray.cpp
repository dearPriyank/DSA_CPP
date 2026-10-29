#include<iostream>
using namespace std;
int main() {
int sum=0;
int brr[][4] ={{1,2,3,4},{5,6,7,8},{9,2,1,4}};
for(int i=0;i<3;i++){       
    for(int j=0;j<4;j++){       
       sum+=brr[i][j];
    }
}
cout<<"sum : "<<sum;
}