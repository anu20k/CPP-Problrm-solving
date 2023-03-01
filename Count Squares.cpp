//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
    
    int countSquares(int n) {
        
        if(n==0 || n== 1){
            return 0;
        }
        int count=0;
        int i=1; 
        int result=1;
        while(result<n){
            i++;
            result = i*i;
            count= count+1;
        }
        return count;
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
        cout << ob.countSquares(N) << endl;
    }
    return 0;
}
// } Driver Code Ends
