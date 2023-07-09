//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string removePair(string s) {
        // code here
        
        
        stack<char>s1;
        string ans;
        s1.push(s[0]);
        for(int i=1;i<s.size();i++){
            
            if(!s1.empty() && s[i]== s1.top()){
                
                s1.pop();
            }
            else{
                s1.push(s[i]);
            }
        }
        
       
        while(!s1.empty()){
            
            ans+=s1.top();
            s1.pop();
        }
        
        if(ans.size()==0){
            return "-1";
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
        
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s; 
        cin>>s;
        
        Solution obj;
        string res = obj.removePair(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends
