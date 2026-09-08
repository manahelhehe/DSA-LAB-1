#include<iostream> //preprocessor directives
using namespace std;
int main(){ //main function
    int arr[6]; //initializing an array of size 6
    int left = 0; //left referce point of array
    int right = 5; //right referce point of array
    int temp; //temporary variable for swapping

    for(int i = 0; i<6; i++) //loop for entering values
    { 
        cout << "Enter the integer at the "<< i+1 << " position";
        cin>>arr[i]; //storing values
    }

    while(left<right){ //as long as left and right values arent equal
        temp = arr[left]; //assigning temp variable the valiable of left el for storage
        arr[left] = arr[right]; //swapping left with righter value
        arr[right] = temp; //assigning the righter index the value of the lefter index stored in temp variable
        left++; //incrementing left 
        right--; //decrementing right
    } 
    cout <<"The new array is: "; //outputting new array
    for(int i = 0; i<6; i++){ //loop for outputting new array values
    cout <<arr[i]<<" ";
    }
}