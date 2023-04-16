//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s)
	{
	    // code here 
	    
	    map<char, int>mp;
	    
	    for(int i=0;i<s.size();i++){
	        mp[s[i]]++;
	    }
	    
	    vector<int>ans;
	    for(auto it:mp){
	        ans.push_back(it.second);
	    }
	    int n=ans.size();
	    sort(ans.begin(), ans.end());
	    for(int i=0;i<n;i++){
	        if(ans[0]==ans[n-1]){
	            return true;
	        }else if(ans[0]==ans[n-2] && ans[n-1]-ans[n-2]==1){
	            return true;
	        }else if(n>=2 && ans[0]==1 && ans[1]==ans[n-1]){
	            return true;
	        }
	        
	    }
	    return false;
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends
