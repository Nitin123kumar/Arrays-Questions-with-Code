// In this code we are going to discuss about how linear search is applicable in array for 
//finding minimum and maximum element in array 

#include<bits/stdc++.h>
using namespace std;

// Pair struct is used to return two values from getMinMax()

struct Pair{

    int min;
    int max;
};

// defining user defined dataype in getMinMax() function

Pair getMinMax(int arr[], int n)
{
     Pair minmax;
    int i;

    if(n==1) // if their is only one element present then both min and max are same
    {
        minmax.min = arr[0];
        minmax.max = arr[0];

        return minmax;
    }

    //if there are more than one element present then,

    if(arr[0]>arr[1])
    {
        minmax.min = arr[1];
        minmax.max = arr[0];
    }
    else 
    {
        minmax.min = arr[1];
        minmax.max = arr[0];
    }

    for(int i=2; i<n; i++)
    {
        if(arr[i]>minmax.max)
        {
            minmax.max = arr[i];
        }
        else if(arr[i]<minmax.min)
        {
            minmax.min = arr[i];
        }
    }
        return minmax;
    }

    //drivers code for test all above condition and functions

    int main()
    {
        int arr[] = { 1000, 34, 543, 456, 44,3,999};

        int size = sizeof(arr)/sizeof(arr[0]);
        //int size = 7;
        Pair minmax = getMinMax(arr,size);

        cout<< "Minimum element in array is:"<<minmax.min<<endl;
        cout<< "Maximum element in array is:"<<minmax.max<<endl;

        return 0;
    }
    