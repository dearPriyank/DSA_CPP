#include<iostream>
using namespace std;
int main() {
    // int arr[3][4]; //--> 3 rows and 4 coloumns array--> blank values are in this 2d array

    int brr[][4] ={{1,2,3,4},{5,6,7,8},{9,2,1,4}};
// yaha coloumn number daalna jaruri hai , and it's your choice to fill roe number or not


            //output
// for(int i=0;i<3;i++){       //for row
//     for(int j=0;j<4;j++){       //for coloumn
//         cout<<brr[i][j]<<" ";
//     }
//     cout<<endl;
// }
  for(int j=0;j<4;j++){         //for coloumn
for(int i=0;i<3;i++){       //for row
        cout<<brr[i][j]<<" ";
    }
    cout<<endl;
}
}
//TC = O(mn) 