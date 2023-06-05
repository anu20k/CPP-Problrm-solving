//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{


	public:
	int findMaxSubarraySum(long long arr[], int n, long long x)
	{
	    // Your code goes here
	    
	    long long sum=0;
	    long long start=0;
	    long long end=0;
	    long long max_sum=INT_MIN;
	    
	    while(end<n){
	        
	       sum+=arr[end++];
	       
	       while(sum > x && start < n){
	           sum-=arr[start++];
	       }
	       
	       if(sum <= x){
	           
	           max_sum = max(max_sum, sum);
	       }
	    }
	    
	    return max_sum;
	}  

		 

};
	  



//{ Driver Code Starts.

int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
    	 int n;
        cin>>n;
        
        long long a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        
        long long sum;
        cin >> sum;
        

        Solution ob;
		cout << ob.findMaxSubarraySum(a, n, sum);
        
	    cout << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends
