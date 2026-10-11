class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        vector<int> result; 
      //firstly make a array of 0 size , it will used to store the final after adding 1 to that combined of digits array
        int carry=1;
      //initially since we have to add 1 so that's why -->carry =1
        for(int i=n-1;i>=0;i--){        //now start from last element of digits array
            int sum=digits[i] + carry;    //make variable sum inside loop in which firstly add the last element of digits to carry and calculate sum as loop runs
            if(sum<10) {    //now condition part comes--> if the sum is less than 10 than it will return sum as it is to result array
                              //and if it runs than for next cycle the carry =0 
                carry=0;
                result.push_back(sum);
            }                
            else {          //now if sum =10 than it will push 0 as last digit to result array and the 1 will be stored in carry 
                carry=1;
                result.push_back(0);
            }
        } if(carry==1){    //if at last carry equals to 1 than value 1 will be pushed out to result array 
            result.push_back(1);
        }
        reverse(result.begin(),result.end());  //we were doing it by reversing the digits array and also storing values in last to first order so now at last reverse the result array 
    return result;    // now return the final array 
    }
};
