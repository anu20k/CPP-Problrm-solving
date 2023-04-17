//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
	string printMinIndexChar(string s, string patt)
	{
	    // Code here
	    map<char, int>mp;
	    
	    for(int i=0;i<patt.size();i++){
	        
	        mp[patt[i]]++;
	    }
	    int flag=0;
	    for(int i=0;i<s.size();i++){
	        if(mp.find(s[i])!=mp.end()){
	           cout<<s[i];
	           flag=1;
	            break;
	        }
	        
	    }
	    if(flag==0){
	        cout<<'$';
	    }
	    
	    
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        string str;
        cin>>str;
        string patt;
        cin >> patt;
        Solution obj;
        cout<<obj.printMinIndexChar(str, patt)<<endl;
    }
    
	return 0;
}
// } Driver Code Ends
