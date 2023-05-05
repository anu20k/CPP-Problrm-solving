//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
	public:
	

   	long long int prime_Sum(int n){
   	    // Code here
   	    long long int sum=0;
   	    bool arr[n+1];
   	    for(int i=2;i<=n;i++){
   	        arr[i]=true;
   	    }
   	    
   	    for(int i=2;i<=sqrt(n);i++){
   	        if(arr[i]){
   	            for(int j=i*i;j<=n;j=j+i){
   	                arr[j]=false;
   	                
   	            }
   	        }
   	    }
   	    
   	    for(int i=2;i<=n;i++){
   	        if(arr[i]){
   	            sum+=i;
   	            
   	        }
   	    }
   	    return sum;
   	    
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		long long int ans = ob.prime_Sum(n);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends
