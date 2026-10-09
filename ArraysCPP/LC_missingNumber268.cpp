class Solution {
public:
    int missingNumber(vector<int>& nums) {
        bool get;   
        for(int i=0;i<=nums.size();i++){ // i-->to compare directly to j
             get=false; // let's assume in loop that we got the missing num 
            for(int j: nums){   // j--> directly element will be compared to i
                if(j==i){
                    get = true; // if condition will true than loop will break 
                    break;
                }
            } if(get==false) // if element not found than we will return that num
            
            return i; 
        }
return 0;    }
};
