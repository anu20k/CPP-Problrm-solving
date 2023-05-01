//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int arr[], int n, int X)
    {
        //Your Code Here
        sort(arr, arr+n);
        for(int i=0;i<n;i++){
            
            int j=i+1;
            int k=n-1;
            int temp = X-arr[i];
            while(j<k){
                if(temp == arr[j]+arr[k]){
                    j++;
                    k--;
                    return 1;
                }
                else if(temp > arr[j]+arr[k]){
                    j++;
                }
                else{
                    k--;
                }
            }
            
        }
        return 0;
    }

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends
