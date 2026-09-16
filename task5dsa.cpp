#include <iostream> //header file and preprocessor directive
using namespace std;

int main() { //main function

    int n; //declaring variable n to store number of students

    do {
        cout<<"Enter number of students (1-10): "; //prompt to enter number of students
        cin>>n; //taking number of students as input
    } 
    while (n < 1 || n > 10); //checking that number of students is between 1 and 10

    int *marks = new int[n]; //creating a dynamic array to store marks

    for (int i=0; i<n; i++) { //loop to input marks
        cout<<"Enter mark " << (i + 1) << ": "; //prompt to enter each mark
        cin>>*(marks+i); //storing marks using pointer indexing
    }

    int *newMarks = new int[n + 1]; //creating a new array with space for one more student

    //part 1 
    for (int i=0; i<n; i++) { //loop to copy the old marks
        *(newMarks + i) = *(marks + i); //copying each mark to the new array
    }

    cout<<"Enter new student's mark: "; //prompt to enter new student's mark
    cin>>*(newMarks + n); //storing the new student's mark

    //part 2
    delete[] marks; //deleting the old array
    marks = newMarks; //making marks point to the new array
    n = n+1; //increasing number of students by 1

    cout<<"\nUpdated marks: "; //output header for updated marks

    for (int i=0; i<n; i++) { //loop to print updated marks
        cout <<*(marks + i)<<" "; //printing each mark using pointer
    }
    cout<<endl; //moving to the next line

    //part 3 
    delete[] marks; //deleting the dynamic array
    marks = nullptr; //setting pointer to null

    return 0; //ending the program
}