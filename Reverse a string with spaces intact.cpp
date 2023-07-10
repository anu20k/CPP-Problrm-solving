//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
  
        string reverseWithSpacesIntact (string s)
        {
            //code here.
            int n= s.size();
            stack<char>s1;
            string ans;
            for(int i=0;i<n;i++){
                
                if(s[i]==' '){
                    continue;
                }else{
                    s1.push(s[i]);
                }
                
            }
            int i=0;
            while(!s1.empty()){
               
                  if(s[i]==' '){
                      ans.push_back(' ');
                  }
                  else{
                       ans.push_back(s1.top());
                       s1.pop();
                  }
                  
                   i++;
               
                
            
            }
            
            return ans;
        }
      

};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    cin.ignore ();
    while (t--)
    {
        string s;
        getline (cin, s);
        Solution ob;
        cout << ob.reverseWithSpacesIntact (s) << endl;
    }
    return 0;
}
// Contributed By: Pranay Bansal

// } Driver Code Ends
