#include<iostream> //preprocessor directives
using namespace std; 

int main(){
    int numbers[5];
    int total = 0;
    for(int i = 0; i<5; i++)
    {
        cout << "Enter the integer at the "<< i+1 << " position";
        cin>>numbers[i];
    }

    for(int j = 0; j<5; j++){
        total = total + numbers[j];
        cout<<"\nThe current total is "<< total;
    }

    cout<<"\nThe total of all the 5 numbers entered is: "<<total;

}