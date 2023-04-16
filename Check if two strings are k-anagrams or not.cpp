//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    bool areKAnagrams(string str1, string str2, int k) {
        // code here
        
        if(str1.size()==str2.size()){
            
        
        map<char, int>mp;
        
        
        for(int i=0;i<str2.size();i++){
            mp[str2[i]]++;
        }
        int count=0;
        for(int i=0;i<str1.size();i++){
            if(mp.find(str1[i])!=mp.end()){
                
                count++;
                
                mp[str1[i]]--;
                
                if(mp[str1[i]]==0){
                    
                    mp.erase(str1[i]);
                }
            }
        }
        
        if(str1.size()-count<=k){
            return true;
        }
        else{
            return false;
        }
        }
        else{
            return false;
        }
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str1,str2;
		cin>>str1>>str2;
		int k;
		cin>>k;
		Solution ob;
		if(ob.areKAnagrams(str1, str2, k) == true)
			cout<<"1\n";
		else
			cout<<"0\n";
	}
}
// } Driver Code Ends
