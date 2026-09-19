#include <iostream>
using namespace std;

int main() {
    int L1, L2, L3;
    cout << "Enter length of three sides of triangle: ";
    cin >> L1 >> L2 >> L3;

    if (L1 + L2 <= L3 || L2 + L3 <= L1 || L1 + L3 <= L2) {
        cout << "The triangle is not valid";
    }
    else if (L1 == L2 && L2 == L3) {
        cout << "The triangle is equilateral triangle";
    }
    else if ((L1*L1 + L2*L2 == L3*L3) || (L2*L2 + L3*L3 == L1*L1) || (L1*L1 + L3*L3 == L2*L2)) {
        cout << "The triangle is right angled triangle";
    }

    else if (L1 == L2 || L2 == L3 || L1 == L3) {
        cout << "The triangle is isosceles triangle";
    }
    else {
        cout << "The triangle is scalene triangle";
    }

    return 0;
}
