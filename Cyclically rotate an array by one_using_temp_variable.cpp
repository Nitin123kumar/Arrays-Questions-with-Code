#include<iostream>
using namespace std;

void rotate(int arr[], int n)
{
    int temp;
    temp = arr[n-1];

    for(int i=n-1; i>0; i--)
    {
        arr[i] = arr[i-1];
    }

    arr[0] = temp;
}

//driver code is vailid for all the test cases that we are taken in the form of t

int main()
{
    int t; // test case
    cin>> t;

    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        rotate(arr,n);

        //print the rotated array
        for(int i=0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
