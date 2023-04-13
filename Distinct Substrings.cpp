//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int fun(string s);

int main() {
    int tt;
    string s;
    cin >> tt;
    while (tt--) {
        cin >> s;
        cout<<fun(s)<<endl;
        
    }
    return 0;
}
// } Driver Code Ends


int fun(string s)
{
    //code here
    
    set<string>mp;
    
    for(int i=0;i<s.size()-1;i++){
        string temp="";
        
        temp.push_back(s[i]);
        temp.push_back(s[i+1]);
        
        mp.insert(temp);
        
    }
    
    return mp.size();
    
}
