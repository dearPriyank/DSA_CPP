#include <iostream>
using namespace std;
    //custom type --> Node
struct Node {
    int value;       //Stores the value
    Node* next;      // it will store address of another node
};
int main() {
        // Create two Node which will store two values
    Node first;
    Node second;
            // Give values to the both nodes
    first.value = 10;
    second.value = 20;
            // Linking first Node to second Node by storing address of second in first   
    first.next = &second;

            // now print first value
    cout << first.value << endl;
    
                // it will Follow the link and print second value
                // -> it links to the value whose address was stored in first one                  
    cout << first.next->value << endl;
}