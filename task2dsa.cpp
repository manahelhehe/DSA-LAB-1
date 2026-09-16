#include<iostream> //header file and preprocessor directive
using namespace std; 

int main(){ //main function

    //part 1
    int n; //declaring variable n to store number of students

    cout<<"Enter the number of students: "<<endl; //prompt to enter number of students
    cin>>n; //taking number of students as input

    if (n==0){ //checking if there are no students
        cout<<"Error! No allocation"; //displaying error message
        return 0; //ending the program
    }
    
    int* marks = new int[n]; //creating a dynamic array to store marks

    cout<<"Enter marks (separated by a space): "<<endl; //prompt to enter the marks

    for(int i = 0; i<n; i++){ //loop to input marks
        cin>>*(marks+i); //storing marks using pointer indexing
    }

    //part 2
    cout<<"The marks entered are: "<<endl; //output header

    for(int i = 0; i<n; i++){ //loop to print the entered marks
        cout<<*(marks+i)<<" "; //printing each mark using pointer
    }

    int total = 0; //initializing total to 0
    double avrg = 0.0; //initializing average to 0
    int count = 0 ; //initializing count to 0

    for(int i = 0; i<n; i++){ //loop to calculate total and count passing marks
        total = total +*(marks+i); //calculating total of all marks
        if (marks[i]>=50) //checking if the mark is 50 or above
            count++; //increasing count
    }

    avrg = static_cast<double>(total)/n; //calculating average of marks

    cout<<"\nTotal of the marks: "<<total<<endl;; //outputting total marks
    cout<<"The average of the marks is: "<<avrg<<endl; //outputting average
    cout<<"The amount of marks greater than 50: "<<count<<endl; //outputting number of marks 50 or above

    //part 3
    delete []marks; //deleting the dynamic array from memory
    marks = nullptr; 
}