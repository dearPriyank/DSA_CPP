#include<iostream>
#include<vector>
using namespace std;
int main() {    
vector<int> vec={2,3,7,9,5,4};  
// sort it in ascending order using sort() function
sort(vec.begin(),vec.end());
cout<<"after sorting in ascending order : ";
for(int i : vec){
    cout<<i<<" ";
}
cout<<endl;
reverse(vec.begin(),vec.end());
cout<<"after sorting in descending order : ";
for(int i : vec){
    cout<<i<<" ";
}
cout<<endl;
sort(vec.begin()+1,vec.end()-1);  //--> sort from index 1 to end se ek pehle of vector not including index 0 and last index
                                // 2 rehne dega and 3 se sort hoga and 4 rehne dega 5 tak sort hoga
cout<<"after sorting in ascending order : ";
for(int i : vec){
    cout<<i<<" ";
}
}