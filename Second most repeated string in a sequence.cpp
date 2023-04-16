//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
        map<string, int>mp;
        
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        
        int max_f=0;
        int max_s=0;
        
        for(auto i:mp){
            if(max_f<i.second){
                max_s=max_f;
                max_f=i.second;
            }
            else if(max_s<i.second){
                
                max_s=i.second;
                
            }
        }
        
        for(int i=0;i<n;i++){
            if(max_s==mp[arr[i]]){
                return arr[i];
            }
        }
        return "";
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends
