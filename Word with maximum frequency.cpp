//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <sstream>
using namespace std;



string maximumFrequency(string s);

int main()
{
    int t;cin>>t;
    cin.ignore();

    for(int i=0;i<t;i++)
    {

        string s;
        getline(cin,s);
        
        
        cout << maximumFrequency(s) << endl;

    }
    return 0;
}

// } Driver Code Ends


string maximumFrequency(string s){
        // Complete the function
        
        map<string, int> mp;
        
        int n=s.size();
        int i=0;
        
        while(i<n){
            string temp="";
            while(i<n && s[i]!=' '){
                temp.push_back(s[i]);
                i++;
            }
            mp[temp]++;
            i++;
        }
        
        int ans=0;
        for(auto it:mp){
            
            ans = max(ans, it.second);
        }
        
        string ans1;
        i=0;
        while(i<n){
            string temp="";
            while(i<n && s[i]!=' '){
                temp.push_back(s[i]);
                i++;
            }
            if(mp[temp]==ans){
                
                ans1 =temp+" "+to_string(ans);
                break;
                
            }
            i++;
        }
        return ans1;
        
        
        
}

