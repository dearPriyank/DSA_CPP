#include<iostream>
using namespace std;
int main() {
    vector<int> v1 ={1,2};
    vector<int> v2 ={6,7};
    vector<int> v3 ={6,9};
    vector<int> v4 ={5,3};
    vector<vector<int>> a = {v1,v2};
    vector<vector<int>> b = {v3,v4};
   
    int m=a.size();
    vector<vector<int>> c(m,vector<int>(m,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<m;k++){
                c[i][j]+=a[i][k]*b[k][j];
        }
        }
    } 
     for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    

}