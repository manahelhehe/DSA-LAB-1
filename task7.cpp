#include<iostream> //preprocessor directives
using namespace std; 

int main(){ //main function

    int arr[10];
    int count = 0;

    for(int i = 0; i<=9; i++) //loop for entering values
    { 
        cout << "Enter the integer at the "<< i+1 << " position";
        cin>>arr[i]; //storing values
    }

    for(int i = 0; i<=9; i++)
    {
       bool found = false;
       for(int j = 0; j<count; j++){
            if(arr[j]==arr[i]){
                found = true;
                break;
            }}

        if(!found){
            arr[count] = arr[i];
            count++;
        }
    }

    cout<<"The unique values array is ";

    for(int m = 0;m<count; m++){
        cout<<arr[m]<<" ";
    }

    cout<<"\ncount: "<<count;
    
}