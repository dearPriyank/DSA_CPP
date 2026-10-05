#include<iostream>
using namespace std;
void rev(int* p1,int* p2){ //ye address ko recieve karne ko alias kehte hai
                            //it recives in the form of --> data_type* variableName
swap(*p1,*p2);    
}
//yaha par void me cout nhi kiya bcz yaha koi nhi value nhi ban rhi hai so yaha bas existing 
                    //variable ki value ko interchange karna jo ki dereference pointer karta hai
                    //means void me lagaya dereference operator but usne main func me value chanage kar diya
int main() {
    int a,b;
    cin>>a>>b;
    rev(&a,&b);
    cout<<a<<" "<<b<<endl;

}