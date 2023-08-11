#include<bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n)
{
    // here we are going to use the concept of partition of QuickSort
    int j=0;

    for( int i=0; i<n; i++)
    {
        if(arr[i] < 0)
        {
            if(i != j)
                swap(arr[i], arr[j]);
            
            j++;
        }
    }
}

//creating the print function for printing the array 

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
        cout<<arr[i]<<" ";

    cout<<endl;
}

//creating the drivers code for testing above functions 

int main()
{
    int arr[] = {-1, 2, -3, 4, -5, 6, -7, 8, -9};

    int size = sizeof(arr)/sizeof(arr[0]);

    //calling the print function
    printArray(arr,size);

    //callint the rearrange function

    rearrange(arr,size);

    cout<<"Rearranged Array is:"<<endl;

    //now printing the new rearrange function

    printArray(arr,size);

    return 0;
}