//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        
       sort(arr, arr+N);
       string min_str = arr[0];
       
       for(int i=1;i<N;i++){
           
           string str = arr[i];
           
           for(int j=0;j<min_str.size();j++){
               if(min_str[j]!=str[j]){
                   min_str.erase(min_str.begin()+j , min_str.end());
                   break;
               }
           }
       }
       
       if(min_str.size()==0){
           return "-1";
       }
        
        return min_str;
        
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
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends
