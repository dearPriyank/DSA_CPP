//HORIZONTAL TRIANGLE

#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;
    // for(int i=1;i<=n;i++) {
    //     for(int j=1;j<=n+1-i;j++) {

    //     //since if you see patter you will get a relation
    //     // i+j(max value of j) = n+1 ---> j(max) = n+1-i --> j<=n+1-i
    //    cout<<"* ";
    // }
    // cout<<endl;
    // }
//}


//METHOD 2

// for(int i=n;i>=1;i--) {
//     for(int j=1;j<=i;j++) {
//         cout<<"* ";
//     } 
//     cout<<endl;
// }
// }

//METHOD 3

int a=n;
for(int i=1;i<=n;i++) {
    for(int j=1;j<=a;j++) {
        cout<<"* ";
    }
    a--;
    cout<<endl;
} 
}