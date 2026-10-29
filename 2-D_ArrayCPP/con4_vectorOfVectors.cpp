                //--> 2D VECTOR


#include<iostream>
using namespace std;
int main() {
    vector<int> v1 ={1,2,3,4,5};
    vector<int> v2 ={6,7,8};
    vector<int> v3 ={9,9,9,9};
    vector<int> v4 ={10};

    vector<vector<int>> v = {v1,v2,v3,v4};
    // v.push_back(v1);
    // v.push_back(v2);
    // v.push_back(v3);
    // v.push_back(v4);

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

}