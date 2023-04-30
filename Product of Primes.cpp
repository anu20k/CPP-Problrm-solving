//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

    bool isprime(long long n){
        if(n==1){
            return false;
        }
        if(n==2){
            return true;
        }
        for(long long i=2;i<=sqrt(n);i++){
            
            
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    long long primeProduct(long long L, long long R){
        // code here
        
        long long int pro=1;
        for(long long i=L; i<=R;i++){
            
            if(isprime(i)){
                
                pro = (pro%1000000007 * i%1000000007)%1000000007;
            }
        }
        
        // long long ans = pro % 1000000007;
        
        return pro;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long L, R;
        cin>>L>>R;
        
        Solution ob;
        cout<<ob.primeProduct(L, R)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
