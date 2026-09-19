#include<iostream>
using namespace std;
int main() {
    bool flag;
    cout<<"enter your flag value(-> use 1 for TRUE and 0 for FALSE)"<<endl;

    cin >> flag;
    
    cout << "Initial respone " << boolalpha << flag << endl;
    //here,boolalpha is written bcz we have to print answer in true and false format not in0or 1 so,that's why. 

    flag = !flag;

    cout << "Toggled response " << flag << endl;

    
}