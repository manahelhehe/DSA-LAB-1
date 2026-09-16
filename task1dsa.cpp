#include<iostream> //header file and preprocessor directive
using namespace std; 

int main(){ //main function

    int sales[5]; //declaring an array sales of size 5
    int*p = sales; //declaring a pointer p pointing to sales address

    //part 1
    cout<<"Enter the 5 non negative values\n"; //prompt to enter the integeres

    for(int i= 0; i<5; i++){ //loop to input

        cout<<"Day "<<i+1;
        cin>>*(p+i); ///storing values through pointer index, it moves thru contiguous memory addresses

    }

    int total = 0; //initializing totals to 0
    int total1 = 0;


    cout<<"Sales for\n"; //output header

    for(int j=0; j<5; j++){ //loop to print sales of each day
        cout<<"Day "<<j+1<<": "<<*(p+j)<<"\n"; //outputting through dereferencing the address of each memory location
        total =  total + *(p+j);  //calculating total
    } 

    cout<<"\nThe total of all the days is "<<total<<endl; //outputting total for the current sales

    //part 2
    *(p+2)+=2; //updating sales of 3rd day with an increment of 2

    cout<<"Updated Sales for\n"; //header for updated sales

    for(int j=0; j<5; j++){ //loop to print updated sales for each day
        cout<<"Day "<<j+1<<": "<<*(p+j)<<endl; //outputting through dereferencing the address of each memory location
        total1 =  total + *(p+j); //calculating updated total
    }

    cout<<"The updated total of all the days is "<<total1<<endl; //outputting updated total

    //part 3
    cout<<p<<endl; //prints address of the array its pointing to
    cout<<&p<<endl; //prints its own address
    cout<<*p<<endl; //prints the value at the referenced address
    cout<<*(p + 2)<<endl; //prints the value 2 memory spaces ahead of referenced address
}