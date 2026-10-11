                    // LEETCODE 189

#include<iostream>
using namespace std;

void rotate(vector<int> &nums , int i ,int j){
    for(;i<j;){
        swap(nums[i],nums[j]); 
        i++;j--;  
    }
    
}
int main() {
    vector<int> nums={1,2,3,4,5,6,7};
    int n = nums.size();
    int k;
    cin>>k;
    k=k%n;

    
    rotate(nums,0,n-1);
    rotate(nums,0,k-1);
    rotate(nums,k,n-1);
    
    for(int a : nums){
        cout<<a<<" ";
    }

}