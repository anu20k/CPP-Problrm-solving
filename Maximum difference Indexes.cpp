//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int maxDiffIndex(int A[], int N)
    {
        map<int, int>mp1;
        map<int, int>mp2;
        
        for(int i=0;i<N;i++){
            if(mp1.find(A[i])==mp1.end()){
                mp1[A[i]]=i;
                
            }
        }
        
        for(int i=N-1;i>=0;i--){
            if(mp2.find(A[i])==mp2.end()){
                mp2[A[i]]=i;
                
            }
        }
        int ans=0;
        for(int i=0;i<N;i++){
            ans=max(ans, mp2[A[i]]-mp1[A[i]]);
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main()
 {
     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         int a[n];
         for(int i=0;i<n;i++)
            cin>>a[i];
         Solution ob;
         cout<<ob.maxDiffIndex(a, n)<<"\n";
     }
	return 0;
}
// } Driver Code Ends
