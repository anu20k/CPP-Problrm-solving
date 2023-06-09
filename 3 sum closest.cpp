//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int closest3Sum(int A[], int N, int x)
    {
        // code here
        
        sort(A,A+N);
        int ans=0;
        int mindiff = INT_MAX;
        for(int i=0;i<N;i++){
            
            int j=i+1;
            int k=N-1;
            int sum=0;
            while(j<k){
                sum = A[i]+A[j]+A[k];
                if(sum==x){
                    return sum;
                }
                else if(sum<x){
                    
                    int diff= x-sum;
                    if(diff<mindiff){
                        
                        mindiff = diff;
                        ans=sum;
                    }
                    j++;
                }
                else{
                    
                    int diff = sum-x;
                    if(diff<mindiff){
                        mindiff = diff;
                        ans=sum;
                    }
                    k--;
                }
                
            }
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int X;
        cin>>X;
        Solution obj;
        cout<<obj.closest3Sum(Arr, N, X)<<endl;
    }
    return 0;
}
// } Driver Code Ends
