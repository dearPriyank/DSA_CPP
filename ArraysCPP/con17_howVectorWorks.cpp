#include<iostream>
using namespace std;
int main() {
                //capacity -- how many elements it can hold
                //size -- how many elements are present in vector
vector<int> v; //--> vacant vector v have created here--> size 0 and capacity=0
v.push_back(23); //--> 23 will be added from last end  -->capacity 1 size 1
cout<<"Size: "<<v.size()<<" "<<"capacity : "<<v.capacity()<<endl;
//--> capacity double ho jayega agar vacant places fill ho gaye honge
v.push_back(11); //--> 11 will be added from last end --> capacity 2 size 2
cout<<"Size: "<<v.size()<<" "<<"capacity : "<<v.capacity()<<endl;
//--> capacity double ho jayega agar vacant places fill ho gaye honge
v.push_back(20); //--> 20 will be added from last end --> capacity 4 size 3
cout<<"Size: "<<v.size()<<" "<<"capacity : "<<v.capacity()<<endl;
//--> yaha pe ek place vacant hai isliye capacity double nahi hoga
v.push_back(8); //--> 8 will be added from last end --> capacity 4 size 4   

//--> capacity double ho jayega agar vacant places fill ho gaye honge
v.push_back(31); //--> 31 will be added from last end --> capacity 8 size 5
cout<<"Size: "<<v.size()<<" "<<"capacity : "<<v.capacity()<<endl;
//--> capacity double ho jayega agar vacant places fill ho gaye honge                               
v.push_back(16); //--> 16 will be added from last end -->capacity 8 size 6
cout<<"Size: "<<v.size()<<" "<<"capacity : "<<v.capacity()<<endl;

v.push_back(7); //--> 7 will be added from last end -->capacity 8 size 7
cout<<"Size: "<<v.size()<<" "<<"capacity : "<<v.capacity()<<endl;
//--> capacity double ho jayega agar vacant places fill ho gaye honge
v.push_back(5); //--> 5 will be added from last end -->capacity 8 size 8
cout<<"Size: "<<v.size()<<" "<<"capacity : "<<v.capacity()<<endl;
//--> capacity double ho jayega agar vacant places fill ho gaye honge

v.pop_back(); //--> pop_back will remove (latest)last value--> capacity kam nhi h˜oti hai but size reduce hota hai
cout<<"Size: "<<v.size()<<" "<<"capacity : "<<v.capacity()<<endl;
//capacity= 8, size=7

v.pop_back(); //--> pop_back will remove (latest)last value--> capacity kam nhi hoti hai but size reduce hota hai
cout<<"Size: "<<v.size()<<" "<<"capacity : "<<v.capacity()<<endl;
//capacity= 8, size=6

cout<<"original array--";
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
} 

cout<<endl;
cout<<"Size: "<<v.size()<<endl;
cout<<"Capacity: "<<v.capacity()<<endl;     //--> capacity ke liye syntax--> vectorName.capacity()

}  