class Solution {
  public:
//   void segregate(vector<int> &arr,&count1,&count0){
            //two pass method
    //   for(int i=0;i<arr.size();i++){
    //       if(arr[i]==0){count0++;}
    //       else {count1++;}
    //   }
    //   }
  
    void segregate0and1(vector<int> &arr) {
    //     // code here
    //   int count0=0;
    //   int count1=0;
    //   segregate(arr,count0,count1);
    //   for(int a=0;a<count0;a++){arr[a]=0;}
    //   for(int b=count0;b<arr.size();b++){arr[b]=1;}
    
                //one pass method
int i=0;
int j=arr.size()-1;
for(;i<j;){
    if(arr[i]==0){i++;}
    else if(arr[j]==1){j--;}
    else if(arr[i]==1 || arr[j]==0){
        swap(arr[i],arr[j]);
        i++;j--;
    }
}
      
      
      
  }
};
