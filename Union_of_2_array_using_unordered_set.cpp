
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
         
        //  Here we are going to use the unordered set because its time Complexity is 
        // lesser then the ordered set 
        // the Time Complexity of Unordered Set if O(n),
        // where as the Time Complexity of the Ordered set is O(nlogn) and it produces the outpur in assending order

        unordered_set<int> s; // unordered set s having the datatype int
        
        // upto now we have defined the set in which we are going to store Both the arrays

        for(int i=0; i<n; i++)
            s.insert(a[i]); // here we are inserting the array a in the set s

        for(int i=0; i<m; i++)
            s.insert(b[i]); // here we are inserting the array b in the set s

        // because we are using the unordered set then the values int the set s is stored without repeatation 
        // thererfore we will directy return the size of the set using the size function

        return s.size();

};

//{ Driver Code Starts.

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