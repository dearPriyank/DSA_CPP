#include<iostream>
using namespace std;
int main() {    
vector<int> v(7); //--> vector v of size 7 and capacity 7 created here --> elements are 0 here
cout<<"Size: "<<v.size()<<" "<<"capacity : "<<v.capacity()<<endl;
v.push_back(23);    //--> now add kar rahe hai element 23 so capacity double ho gayi and size +1 ho gayi
cout<<"Size: "<<v.size()<<" "<<"capacity : "<<v.capacity()<<endl;

for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
}