#include<iostream>
using namespace std;
int main() {
    bool weather;
  
  cout << "is it raining? "; // 0=false or no 
                            //any non zero number = true 
  cin >>weather;
  weather ? cout << "take an umbrella" : cout << "no need ";
    return 0;
}