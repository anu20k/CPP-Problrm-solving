//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to count the number of subarrays which adds to the given sum.
    int subArraySum(int arr[], int n, int sum)
    {
        //Your code here
        
        unordered_map<int, int>mp;
        mp[0]=1;
        int c_sum=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            
         c_sum=c_sum+arr[i];
         if(mp.find(c_sum-sum)!=mp.end()){
             
             cnt+=mp[c_sum-sum];
         }
         mp[c_sum]++;
        }
        
        return cnt;
        
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>sum;
	    Solution obj;
	    cout<<obj.subArraySum(arr, n, sum)<<endl;
	}
	return 0;
}
// } Driver Code Ends
