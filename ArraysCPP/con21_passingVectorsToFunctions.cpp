#include<iostream>
#include<vector>
using namespace std;

// PASS BY VALUE --> value of vector will be copied to the function and we cannot change the value of vector in main function
// void change(vector<int> vec){  //--> pass by reference so that we can change the value of vector in main function{
// vec[2]=23;
// }
// int main() {    
// vector<int> vec={2,3,7,9,5,4};  
// change(vec);
// cout<<"value of vector of index 2 after calling function change : "<<vec[2]<<endl; 
//  //--> value of index 2 will not change because we passed by value
// }

// PASS BY REFERENCE --> value of vector will be copied to the function and we can change the value of vector in main function
void change(vector<int> &vec){  //--> pass by reference so that we can change the value of vector in main function{
vec[2]=23;
}
int main() {    
vector<int> vec={2,3,7,9,5,4};  
change(vec);
cout<<"value of vector of index 2 after calling function change : "<<vec[2]<<endl; 
 //--> value of index 2 will not change because we passed by value
}