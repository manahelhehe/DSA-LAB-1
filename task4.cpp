#include<iostream> //preprocessor directives
using namespace std; 

int main(){

    int arr[8];
    int smallest = arr[0];
    int largest = arr[0];
    int indice1;
    int indice2;
    int count = 0;
    int repeatedNum;

    for(int i = 0; i<8; i++){
        cout <<"Enter the number at the "<<i+1<< " position";
        cin >> arr[i];
    }
    
    for (int j = 1; j<8; j++){
        if(arr[j]<smallest){
            smallest = arr[j];
            indice1 = j;
        }
    }

    for (int z = 1; z<8; z++){
        if(largest<arr[z]){
            largest = arr[z];
            indice2 = z;
        }
    }

    for(int m = 1; m<8; m++)
    {
        if(arr[m]==arr[m+1])
            cout<<arr[m]<<" is repeating and its first occurrence is "<<m;
    }

    cout <<"\nThe largest number in the array is "<<largest<<" at the index "<<indice2;
    cout <<"\nThe smallest number in the array is "<<smallest<<" at the index "<<indice1;

    


}