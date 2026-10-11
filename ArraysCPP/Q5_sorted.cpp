#include <iostream>
using namespace std;
int main() {
    int arr[] = {10, 20, 30};
    int n = sizeof(arr) /4;
    bool sorted = true; //assume that already given array is sorted in ascending order
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i+1]) {  //chech whether preceeding element is greater than the next one
            sorted = false;
            break;
        }
    }
    cout << (sorted ? "true" : "false")<<endl;    //-> if sorted it will print true or if not than it will print false
}