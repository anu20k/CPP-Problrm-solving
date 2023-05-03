//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    long long int fibSum(long long int N){
        //code here
         if (N == 0 || N == 1)
        {
            return N;
        }
        int a=0;
        int b=1;
        long long int c=0;
        N=N-1;
        
        long long int sum=a+b;
        while(N){
            
            c=(a+b)%1000000007;
            sum=sum+c;
            a=b;
            b=c;
            N--;
            
        }
        return sum%1000000007;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        Solution ob;
        cout << ob.fibSum(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends
