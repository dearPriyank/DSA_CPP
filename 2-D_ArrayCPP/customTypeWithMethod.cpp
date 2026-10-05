#include <iostream>
using namespace std;
// Custom type called Point
// It stores the x and y coordinates of a point
struct Point {
    double x;
    double y;
};

// Function to calculate distance between two points
double distance(Point p1, Point p2) {

    // Distance formula:
    // d = sqrt((x2-x1)^2 + (y2-y1)^2)
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;

    return sqrt(dx * dx + dy * dy);
}

int main() {

    // Create the first point: (0, 0)
    Point p1 = {0, 0};

    // Create the second point: (3, 4)
    Point p2 = {3, 4};

    // Calculate and print the distance
    cout << distance(p1, p2);

    return 0;
}