#include<iostream>
using namespace std;
int main() {
    bool light=true;
    // cout<<(light  ? "ON" :"OFF");
    cout<<(light ? "on":"off")<<endl;
    light=!light;
    cout<<(light ?"on":"off");
}