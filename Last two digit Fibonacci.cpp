//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
    int fibonacciDigits(long long N){
        //code here
        
        if(N==0 || N==1){
            
            return N%100;
        }
        
        return (fibonacciDigits(N-1) + fibonacciDigits(N-2))%100;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        long long N;
        cin>>N;
        Solution ob;
        int ans=ob.fibonacciDigits(N);
        if(ans/10)
         cout<<ans;
        else
         cout<<0<<ans;
        cout<<"\n";  
    }
}
// } Driver Code Ends
