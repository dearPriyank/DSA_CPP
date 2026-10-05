#include<iostream>
#include<vector>
using namespace std;
int main() {    
vector<int> v={2,3,7,3,5,4};

    // for each loop

for(int ele : v){  // syntax--> for(datatype variable_name : vector_name){}
    // value can't be changed in this loop
         //ele will hold the value of each element of vector v one by one--> it will take directly the valu not index
    cout<<ele<<" ";     //--> disadvantage --> ek hi order me print hoga--> we cannot access the index of element here
} cout<<endl;

    // for loop --> we can access the index of element here in any order we want
for(int i=0;i<v.size();i++){  
    
            //--> individual element ko square bracket ki help se access kar rahe hai--> using index of element
//--> value can be changed in this
if(i==2){
    v[i]=v[i]*2;
}
cout<<v[i]<<" ";
}
}