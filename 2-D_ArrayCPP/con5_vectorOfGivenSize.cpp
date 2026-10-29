#include<iostream>
using namespace std;
int main() {
    int m,n;
    cout<<" enter row ";
    cin>>m;
    cout<<" enter col ";
    cin>>n;
    vector<vector<int>> vec(m,vector<int>(n,0)) ;   //m rows ka vector jisme vector store hai
                                            //jiska size n hai and jiske andar 0 store hai
    vec.push_back(vector<int>(4,-1));   //4 size ka vector jisme -1 stored hai
    for(int i=0;i<vec.size();i++){
    for(int j=0;j<vec[i].size();j++){
        cout<<vec[i][j]<<" ";
    }
    cout<<endl;
}
}