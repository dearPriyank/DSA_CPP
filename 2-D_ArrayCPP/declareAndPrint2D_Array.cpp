#include <iostream>
using namespace std;
int main() {    
int arr[3][3];  //--> it will create 2D array of 3row and 3 column

int value = 1;  //--> it will start from 1 and further increse by 1 

    for (int i = 0; i < 3; i++) {        //--> loop for row         
        for (int j = 0; j < 3; j++) {  //--> loop for column
            // Store the current value in the array
           arr[i][j] = value++;
        }
    }
    // Print the 3x3 array
    for (int i = 0; i < 3; i++) {
                // Print each element of the current row
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}