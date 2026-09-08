#include <iostream> //preprocessor directives
using namespace std;

class Student{ //creating class Student
public: //access specifier
    int marks; //declaring data member rollNumber and marks of type int
    int rollNumber;

    void display(){ //funtion of return type void
        cout << "\nRoll Number: "<<rollNumber; //displayibg roll number
        cout << "\nMarks of Student: "<<marks; //displaying marks
    }
};

int main(){ //main function
    Student s1; //declaring 
    s1.marks = 80; //initializing object values
    s1.rollNumber = 1;

    Student s2; //declaring 
    s2.marks = 90; //initializing object values
    s2.rollNumber = 2;

    s1.display();
    s2.display();
}
