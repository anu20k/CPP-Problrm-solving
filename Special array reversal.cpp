//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    string reverse(string str)
    { 
        //code here.
        int i=0;
        int j=str.size()-1;
        
        while(i<j){
            
            while(i<j && !isalpha(str[i]))
            {
                i++;
            } 
             while(i<j && !isalpha(str[j]))
            {
                j--;
            } 
            if(i<j){
                swap(str[i], str[j]);
                
            }
            i++;
            j--;
        }
        
        return str;
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.reverse(s) << endl;
    }
return 0;
}


// } Driver Code Ends
