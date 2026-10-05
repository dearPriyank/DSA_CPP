#include <iostream>
using namespace std;
//   Creating a class named Student
//   class is used to group related information together
class info {         //-->syntax
public:
                 // now making variables in which info will be stored
    string name;
    int age;
    int marks;
};

int main() {

    // Creating one info object
    // student is an object of class info 
    info student;

        // Giving values to the student's details
    student.name = "PRIYANK";
    student.age = 17;
    student.marks = 94;

                // Printing the student's details
    cout << student.name <<endl
         << student.age <<endl
         << student.marks<< endl;
}