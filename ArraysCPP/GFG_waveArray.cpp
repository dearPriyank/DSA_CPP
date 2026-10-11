class Solution {
  public:
    void sortInWave(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n;i+=2){
            //even hai n to last me i direct bahar jaayega but agar odd hai toh last me wo swap kiske saath hoga 
            if(i==n-1) continue; //now i =n-1 me last waali vale jaisi ki waisi rahegi if n-->odd
            swap(arr[i],arr[i+1]);
        }
        
        //isme preceding value and that value both are swapping to make given output or like wave array
        
    }
};
