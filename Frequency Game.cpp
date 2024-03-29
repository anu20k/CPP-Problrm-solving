//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

int LargButMinFreq(int arr[], int n) {
    // code here
    
    
    map<int, int>m;
    
    for(int i=0;i<n;i++){
        
        m[arr[i]]++;
    }
    int ans=INT_MAX;
    int out=INT_MIN;
    for(int i=0;i<n;i++){
        ans=min(ans, m[arr[i]]);
    }
    
    for(int i=0;i<n;i++){
        if(ans==m[arr[i]] && out<arr[i]){
            
            out=arr[i];
        }
    }
    
    return out;
}

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    // Iterating over testcases
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];

        cout << LargButMinFreq(arr, n) << endl;
    }
}
// } Driver Code Ends
