//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
       int memo(int i,int j,vector<int>&a,vector<vector<int>>&dp)
    {
        int ans=-1e9;
        if(i>j)
        {
            return 0;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        for(int k=i;k<=j;k++)
        {
            int curr=a[i-1]*a[k]*a[j+1]+memo(i,k-1,a,dp)+memo(k+1,j,a,dp);
            ans=max(ans,curr);
        }
        return dp[i][j]=ans;
    }
        int maxCoins(int N, vector <int> &a)
        {
                 a.insert(a.begin(),1);
            a.push_back(1);
            vector<vector<int>> dp(N+1,vector<int>(N+1,-1));
            // return rec(1,N,a);
            return memo(1,N,a,dp);
        }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution S;
        cout<<S.maxCoins(n,a)<<endl;
    }
    return 0;
}
// } Driver Code Ends
