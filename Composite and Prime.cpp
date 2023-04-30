//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	
	    bool isprime(int n){
	       // if(n==1 || n== 0){
	       //     return false;
	       // }
	        if(n==2){
	            return true;
	        }
	        
	        for(int i=2;i<=sqrt(n);i++){
	            if(n%i==0){
	                return false;
	            }
	        }
	        return true;
	    }
		int Count(int L, int R){
		    // Code here
		    int pri=0;
		    int com=0;
		    for(int i=L;i<=R;i++){
		        if(i==1){
		            continue;
		        }
		        if(isprime(i)){
		          //  cout<<i<<" ";
		            pri++;
		        }
		        else{
		            com++;
		        }
		        
		    }
		  //  cout<<pri;
		    int ans;
		  //  com = R-L+1-pri;
		    if(L==1){
		        ans = (com- pri)-1;
		    }
		     ans = (com- pri);
		    return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int L, R;
		cin >> L >> R;
		Solution obj;
		int ans = obj.Count(L, R);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
