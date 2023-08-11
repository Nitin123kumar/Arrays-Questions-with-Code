#include<bits/stdc++.h>
using namespace std;

// creating function which will give the reverse of the array

void reverseArray(int arr[], int start, int end)
{
    while(start<end)
    {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
    }
}

// creating function for printing the array

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
        cout<<arr[i]<<" ";

    cout<<endl;
}

// Main derivers code

int main()
{
    int arr[] = {1,2,3,4,5,6,7};

    int n = sizeof(arr)/sizeof(arr[0]);

    //now print the original array by calling printArray function

    printArray(arr, n);

    //calling the reverse function 
    reverseArray(arr,0,n-1);

    cout<< "Reverse Arary is:"<< endl;

    //now Printing the new Array

    printArray(arr,n);

    return 0;

}

