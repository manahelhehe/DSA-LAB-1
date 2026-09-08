#include<iostream> //preprocessor directives
using namespace std; 
int main(){
    int numbers[5] = {2,4,6,8,10}; //initializing of array number
    numbers[2] = 7; //changing the value of 3rd element

    for(int i = 0; i<5; i++){
        cout<<numbers[i]<<" "; //outputting the numbers using a for loop with spaces 
    }
}