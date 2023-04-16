//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       //Your code here
       map<char, int>mp;
       for(int i=0;i<S.size();i++){
           
           mp[S[i]]++;
       }
       int min1=INT_MAX;
       for(int i=0;i<S.size();i++){
           min1=min(min1, mp[S[i]]);
           
       }
       for(int i=0;i<S.size();i++){
           if(mp[S[i]]==min1 && mp[S[i]]==1){
               return S[i];
               break;
           }
           
       }
       
       return '$';
    }

};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}

// } Driver Code Ends
