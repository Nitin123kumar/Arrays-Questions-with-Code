
// In this problem we are going to discuss all about how to 
//HOW TO FIND THE MAXIMUM AND MINIMUM ELEMENT IN ARRAY USING MINIMUM NUMBER OF COMPERSION

//There are two ways to solve this problem that are -----
//1st: by SORTING method
//2nd: by LINEAR SEARCH method

//In this code we are going to solve this problem using sorting method

#include<algorithm>  // we generally use this header for to test wheather the first set is subset of another or not
#include<iostream>
using namespace std;

/*for getting or returning multiple values from a function
we will going to use either Structure or pointer*/


//defining user define datatype or Structure
struct Pair{

    int min;
    int max;
};

Pair getMinMax(int arr[], int n)
{
    Pair minmax;

    sort(arr, arr + n); // this is the function for sorting the array from start to n.

    minmax.min = arr[0];    // dot operator is used to access class, structure, ou union 
    minmax.max = arr[n-1];

    return minmax;
}

// now up to above function sorting is done and we already assign min and max values using minmax variable

//drivers code

int main()
{
    int arr[] = {10,4,34,654,34,3,87,93};

    int size = sizeof(arr)/sizeof(arr[0]);

    Pair minmax = getMinMax(arr, size);

    cout<< "Minimum element of Array is:"<< minmax.min <<endl;
    cout<< "Maximum element of Array is:"<< minmax.max <<endl;

    return 0;

    }

