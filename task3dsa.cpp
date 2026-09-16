#include <iostream> //header file and preprocessor directive
using namespace std;

int main() { //main function

    int sales[2][3]; //declaring a 2D array for sales of 2 branches and 3 days
    int (*rowPtr)[3] = sales; //declaring a pointer to an array of 3 ints; points to first row

    cout<<"Enter sales for 2 branches, 3 days each: "<<endl; //prompt to enter sales

    //part 1
    for (int r = 0; r < 2; r++) { //loop to input sales for each branch
        cout<<"Branch "<< (r+1)<<"(3 values): "; //asking for sales of current branch

        for (int c = 0; c<3; c++) { //loop to input sales for each day
            cin>>*(*(rowPtr+r)+c); //storing values using pointer and row/column index
        }
    }

    cout << "\nTable:\n"; //output header for sales table

    for (int r=0; r<2; r++) { //loop to print each branch

        for (int c=0; c<3; c++) { //loop to print sales for each day
            cout << *(*(rowPtr + r) + c) << " "; //printing the value using pointer
        }
        cout<<endl; //moving to the next row
    }

    //part 2
    cout << "\nBranch totals: "; //output header for branch totals

    for (int r = 0; r < 2; r++) { //loop to calculate total for each branch
        int rowTotal = 0; //initializing row total to 0

        for (int c = 0; c < 3; c++) { //loop to add sales of each day
            rowTotal = rowTotal + *(*(rowPtr + r) + c); //calculating total for current branch
        }
        cout<<rowTotal<<" "<<endl; //outputting total of the branch
    }

    cout<<"Day totals: "; //output header for day totals

    for (int c=0; c<3; c++) { //loop to calculate total for each day
        int colTotal = 0; //initializing column total to 0

        for (int r=0; r<2; r++) { //loop to add sales from both branches
            colTotal = colTotal+*(*(rowPtr + r) + c); //calculating total for current day
        }
        cout<<colTotal<< " "<<endl; //outputting total of the day
    }

    return 0; //ending the program
}