//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
        {
            //code here.
            
            string ans="";
            int i= s.size()-1;
            while(i>=0){
                
                 string temp="";
                 while(i>=0 && isdigit(s[i])){
                     temp=temp+s[i];
                     i--;
                 }
                 reverse(temp.begin(), temp.end());
                 ans=ans+temp;
                 ans.push_back(s[i]);
                 i--;
            }
            return ans;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends
