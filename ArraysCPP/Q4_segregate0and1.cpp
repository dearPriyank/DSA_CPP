class Solution {
  public:
  int main (){
      arr[] = [0, 1, 0, 1, 0, 0, 1, 1, 1, 0]
      for(int i=0;i<arr.size();i++){
          if(arr[i]==0){count0++;}
          else {count1++;}
      }
      }
  
    void segregate0and1(vector<int> &arr) {
        // code here
      int count0=0;
      int count1=0;
      segregate(arr,count0,count1);
      for(int a=0;a<count0;a++){arr[a]=0;}
      for(int b=count0;b<arr.size();b++){arr[b]=1;}
    }
}