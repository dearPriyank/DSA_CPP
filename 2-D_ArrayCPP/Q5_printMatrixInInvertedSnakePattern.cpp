#include<iostream>
using namespace std;
int main() {
int brr[][4] ={{1,2,3,4},{5,6,7,8},{9,2,1,4},{4,2,6,9}};
for(int i=0;i<4;i++){  
        if(i%2==0){
            for(int j=3;j>=0;j--){
                cout<<brr[i][j]<<" ";
        }
    } else {
        for(int j=0;j<=3;j++){
                cout<<brr[i][j]<<" ";
        }
    }
}
}