
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
          
          // here we are going to use the array for performing the union of the two arrays

          // for this first we are creating a new large array let c
        int c[1000000];
        int j=0;

          // now we are going to store array a and array b in the new array c using for loop

        for(int i=0; i<n; i++)
            c[i] = a[i];
        // upto now we had stored all the values of the array a in the new array c

        for(int i=n; i<n+m; i++)
            c[i] = b[j++]; // for this step we have taken the int j=0; because the array c
                           // will store the array b from n with increment with i from n to m and increment of 
                           // element of b from j=0 to j=m using j++.
        
        // upto now we had stored all the values of array a and array b int the new array c(includes Repeated values also)

        // now we will sort the array in assending order of comparing next value with previous value
        // for increment count (if the previous values is similar to next value that means both values are same
        // and that of only one value is counted upto the next values will not become different from the previous value)

        sort(c, c  + n+m);

        int count = 0; // considered initial count as 0 for null array as a test case.

        for(int i=0; i<n+m; i++)
        {
            if(c[i] !=c[i-1])
                count ++;
        }

        return count;

    }
};

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}
