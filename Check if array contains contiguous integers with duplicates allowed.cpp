//{ Driver Code Starts
// C++ implementation to check whether the array
// contains a set of contiguous integers
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    // Function to check whether the array contains
    // a set of contiguous integers
    bool areElementsContiguous(int arr[], int n)
    {
	// Complete the function
	           map<int,int>mp;
	           int cnt=0;
	           
	           for(int i=0;i<n;i++){
	               
	               mp[arr[i]]++;
	           }
	           
	           for(int i=0;i<n;i++){
	               if(mp.find(arr[i]+1)== mp.end()){
	                   
	                   cnt++;
	                   mp[arr[i]+1]++;
	               }
	           }
	           
	           if(cnt>1){
	               return false;
	           }
	           return true;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n + 1];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        if (ob.areElementsContiguous(arr, n))
            cout << "Yes" <<endl;
        else
            cout << "No" <<endl;
    }
	return 0;
}

// } Driver Code Ends
