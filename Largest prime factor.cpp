//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 

    bool isprime(int n){
        
        if(n==1){

            return false;
        }
        for(int i=2;i<=sqrt(n);i++){
            
            if(n%i==0){
                return false;
            }
            
        }
        return true;
    }
    long long int largestPrimeFactor(int N){
        // code here
        int j=2;
        long long ans=0;
        for(long long  i=2;i<=N/2;i++){
            if(N%i==0 && isprime(i)){
                ans=max(ans, i);
                
            }
        }
        if(ans==0){
            return N;
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
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends
