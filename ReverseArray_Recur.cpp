#include<iostream>
using namespace std;

// initially create function for reversein the array

void reverseArray(int arr[], int start, int end)
{
    if(start >= end)
        return;
    
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    //recursive function calling
    
    reverseArray(arr, start + 1, end -1);
}

//Now Creating the print function for printing the array

void printArray(int arr[], int size)
{
    //for printing the array we have to use the for loop for printing all the elements of the array

    for(int i=0; i<size; i++)
    cout<<arr[i]<<" ";

    cout<<endl;

    return;
}

//drivers code for tesing all above functions

int main()
{
    int arr[] = {1,2,3,4,5,56,6,99};

    int n = 8;

    //calling printArrray function 
    printArray(arr, 8);

    //calling the reverseFunction 
    reverseArray(arr, 0, 7);

    cout<< " Reverse Array is:";

    //now calling print function for print the new reverse array

    printArray(arr, 8);

    return 0;
}

