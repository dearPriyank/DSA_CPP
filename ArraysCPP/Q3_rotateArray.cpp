#include<iostream>
using namespace std;
void print(vector<int> &num){
    for(int k : num){ cout<<k<<" ";} cout<<endl;
}
int main() {
    vector<int> num={1,2,3,4,5,6,7};  // k=3 --> last ke 3 elements aage jaayenge and rest piche aayenge
    //--> 7654321 aayega but mujhe 5671234 lana hai
    //--> initially 0 se n-1 index ko reverse karo
    //--> fir 7654321 aayega now 0 se k-1 index ko ko reverse karo and k se n-1 index ko reverse karo
    //--> we will finally get 5671234 as answer
    int i=0;
    int n=num.size();
    int j=n-1;
    int k=3;
        for(;i<j;i++,j--){
            swap(num[i],num[j]);
        
        
    }
    print(num);

    for(int f=0 , g=k-1;f<g;f++,g--){
        swap(num[f],num[g]);
        
    }
    for(int x=k,y=n-1;x<y;x++,y--){
        swap(num[x],num[y]);
            
        
    } print(num);
}