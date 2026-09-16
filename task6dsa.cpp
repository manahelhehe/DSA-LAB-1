#include <iostream> //header file and preprocessor directive
using namespace std;

int main() { //main function

    int n = 3; //declaring number of values as 3
    int *values = new int[n]; //creating a dynamic array to store values

    for (int i=0; i<n; i++) { //loop to input values
        cin>>values[i]; //storing each value in the array
    }

    for (int i=0; i<n; i++) { //loop to print the values
        cout << values[i] << " "; //outputting each value
    }
    cout<<endl; //moving to the next line

    delete[] values; //deleting the dynamic array
    values = nullptr; //setting pointer to null

    return 0; //ending the program
}