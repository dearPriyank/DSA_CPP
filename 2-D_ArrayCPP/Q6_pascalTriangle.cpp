                // METHOD 1

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;    //store final result
        for(int k=1;k<=numRows;k++){    //fill cells by 1 whose row should be numRows and col should 1 to numRows
            ans.push_back(vector<int>(k,1));  //pushing vector with size varying size which are filled with 1
        }
        for(int i=2;i<ans.size();i++){ //leave upper 2 rows as they are filled with1 
            for(int j=1;j<ans[i].size()-1;j++){   //leave 1st and last col as they are already fille with 1
                // if(j!=0 && i==j){    //this condition not required as we have already starting from row 2 till end and coloumn from 2nd to last second 
                ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
                //}
            }
        } return ans;
    }
};

                //method 2
                
// class Solution {
// public:
//     vector<vector<int>> generate(int numRows) {
//        vector<vector<int>> vec;    //blank matrix to store values
//         vec.push_back({1});    //peak pe 1 rehta hai so 1 bhejh diya
//          for(int i=1;i<numRows;i++){    //now start from 2nd row bcz 1st is already filled                        by 1
//             vector<int> v(i+1,1); //sabhi vector ke different coloums honge and har rows me 1 daal diya    and isse rows banegi vec me store karne ke liye
//             for(int j=1;j<i;j++){  
//                 //main condition
//                 v[j]=vec[i-1][j] + vec[i-1][j-1] ;
//             } vec.push_back(v);
//         } return vec;
//     }
// };