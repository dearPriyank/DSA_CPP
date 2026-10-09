class Solution {
public:
    int missingNumber(vector<int>& nums) {
//         bool get;   
//         for(int i=0;i<=nums.size();i++){ // i-->to compare directly to j
//              get=false; // let's assume in loop that we got the missing num 
//             for(int j: nums){   // j--> directly element will be compared to i
//                 if(j==i){
//                     get = true; // if condition will true than loop will break 
//                     break;
//                 }
//             } if(get==false) // if element not found than we will return that num
            
//             return i; 
//         }
// return 0;  TC=n*n

           
           
            //method 2 by sorting it

// sort(nums.begin(),nums.end());
// for(int i=0;i<nums.size();i++){
//     if(i!=nums[i])  //if index is not equal to element than it will return index   
//     return i;
// }
//    return nums.size();  //if all indexNumber = their respective elements than at last the last num(n) which is in range but whose index and element is not there so the last num i.e, num.size() where the range ends will be printed as missing num   
   // TC=nlogn --> better than n*n
   

                        //method 3 by maths

    // int n=nums.size();
    // int sum=0;
    // int sumOfIndex=(n*(n+1))/2;  //1 se n tak ka sum nikalo
    // for(int i=0;i<n;i++){
        
    //     sum+=nums[i];  //array ke elements ka sum nikalo
    // } return sumOfIndex-sum;  //jo bhi difference aayega wo missing number hoga
// TC=O(n)


    // method 4 
int n=nums.size();
vector<bool> arr(n+1 , false); //0 se n tak jaaye isiliye n+1 ka array
// bool type ka array banaya jisme false store hai har jagah

for(int i=0;i<n;i++){   
    arr[nums[i]]=true; //now nums me jo values hai unko as a index in arr treat karke us jagah par jaha false tha usse true kar do
}
for(int j=0;j<=n;j++){
    if (arr[j]==false) // jaha false bacha hai uska index print kar do
    return j;
}
return 0;


// TC=O(n)

   }  
};

            

