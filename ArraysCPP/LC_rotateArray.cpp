1class Solution {
2public:
3    void rev(vector<int> &nums,int a,int b){
4        for(;a<b;){
5            swap(nums[a],nums[b]);
6            a++;
7            b--;
8        }
9    }
10
11    void rotate(vector<int>& nums, int k) {
12        int n=nums.size();
13        k= k%n;
14        rev(nums ,0 ,n-1 );
15        rev(nums ,0,k-1);
16        rev(nums ,k,n-1);
17    }
18};
