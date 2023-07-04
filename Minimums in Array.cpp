//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    long long getMin(long long A[], long long B[], long long n)
    {
        // Your code goes here
        
        vector<pair<int, int>>v1;
        vector<pair<int, int>>v2;
        
        if(n==1){
            return -1;
        }
        
        for(int i=0;i<n;i++){
            
            v1.push_back({A[i], i});
            v2.push_back({B[i], i});
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        
        long long sum=0;
        
        for(int i=0;i<n;i++){
            
            sum = v1[i].first+v2[i].first;
            if(v1[i].second != v2[i].second){
                return sum;
                break;
            }
            else{
                
                long long a = v1[i].first + v2[i+1].first;
                long long b = v1[i+1].first + v2[i].first;
                
                if(a<b){
                    return a;
                }
                else{
                    return b;
                }
            }
            
        }
        
        return -1;
    }
};

//{ Driver Code Starts.

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long long n, i;
        cin>>n;
        long long A[n+1], B[n+1];
        for(i=0;i<n;i++)
        cin>>A[i];
    
        for(i=0;i<n;i++)
        cin>>B[i];
        Solution ob;
        cout<< ob.getMin(A, B, n) <<endl;
    }
}

// } Driver Code Ends
