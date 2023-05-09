//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<string> invIsoTriangle(int N) {
        // code here
        vector<string>ans;
        
        for(int i=N;i>=1;i--){
            string str="";
            for(int j=1;j<=N-i;j++){
                
                str+=" ";
            }
             for(int j=1;j<=2*i-1;j++){
                
                str+="*";
            }
            ans.push_back(str);
            // cout<<endl;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        vector<string> v = ob.invIsoTriangle(N);
        
        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<endl;
    }
    return 0;
}
// } Driver Code Ends
