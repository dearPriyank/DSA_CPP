#include<iostream>
#include<vector>    //--> vector is a library which is used to make dynamic array(array which grows)   
using namespace std;
int main() {
    // vector --> array which grows--> dynamic array
    //flaw of array--> fixed size
                            // --> instead of 46 if i don't write anything than automatically it will print 0
    vector<int> arr(8,46);  //--> syntax to make vector--> vector<data_type> vectorName(size,value);
    int n=arr.size();  //--> vector ka size aise nikalo--> n=vectorName.size()
    cout<<"original array--";
    for(int i=0;i<n /*arr.size()*/;i++){
        cout<<arr[i]<<" ";
    } cout<<endl;


    //APPEND--> add new element backside

    arr.push_back(23); //--> 23 will be added from last end
    arr.push_back(79); //--> same as above

    //REMOVE--> pop back will remove last latest value 
    arr.pop_back(); //--> pop_back will remove (latest)last value 
    arr.push_back(90);
    cout<<"after append--";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    } 
}