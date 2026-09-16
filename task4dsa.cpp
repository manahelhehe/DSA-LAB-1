#include <iostream> //header file and preprocessor directive
using namespace std;

int main() { //main function

    //part 2
    int rows, cols; //declaring variables for students and subjects

    do {
        cout<<"Enter number of students: "; //prompt to enter number of students
        cin>>rows; //taking number of students as input
    } 
    while (rows<=0); //checking that number of students is positive

    do {
        cout<<"Enter number of subjects: "; //prompt to enter number of subjects
        cin>>cols; //taking number of subjects as input
    } 
    while(cols<=0); //checking that number of subjects is positive

    int **marks = new int*[rows]; //creating an array of row pointers

    for (int r=0; r<rows; r++) { //loop to allocate space for each row
        marks[r] = new int[cols]; //allocating columns for each student
    }

    //part 3
    for (int r = 0; r < rows; r++) { //loop to input marks for each student
        cout << "\nEnter marks for student " << (r + 1) << ":\n"; //prompt for current student

        for (int c=0; c<cols; c++) { //loop to input marks for each subject
            cout<<"Subject " <<(c + 1)<<": "; //prompt for current subject
            cin>>*(*(marks+r)+c); //storing marks using pointer indexing
        }
    }

    cout << "\nMarks matrix:\n"; //output header for marks matrix
    
    for (int r=0; r<rows; r++) { //loop to print each student's marks
        for (int c = 0; c < cols; c++) { //loop to print marks for each subject
            cout << *(*(marks + r) + c) << " "; //printing marks using pointer
        }
        cout<<endl; //moving to the next row
    }

    //part 4
    int bestTotal = 0; //initializing highest total to 0
    int bestStudent = 1; //initializing best student to student 1

    for(int r = 0; r < rows; r++) { //loop to calculate total for each student
        int total = 0; //initializing total to 0

        for (int c=0; c<cols; c++) { //loop to add marks of each subject
            total = total+*(*(marks + r) + c); //calculating total marks of current student
        }

        if (r == 0 || total > bestTotal) { //checking if current total is the highest
            bestTotal = total; //updating highest total
            bestStudent= r + 1; //updating the student number
        }
    }

    cout<<"\nHighest total: Student "<<bestStudent
         <<" with "<<bestTotal<<" marks"<<endl; //outputting student with highest total

   //part 5
    for(int r=0; r<rows; r++) { //loop to delete each row
        delete[] marks[r]; //deleting the current row
    }

    delete[] marks; //deleting the row-pointer array
    marks = nullptr; //setting pointer to null

    return 0; //ending the program
}