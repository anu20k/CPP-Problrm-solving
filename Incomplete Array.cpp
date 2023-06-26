//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int countElements(int N, int A[]) {
        // code here
        
        int min = A[0];
        int max = A[0];
        set<int>s;
        
        
        if(N == 1){
            return 0;
        }
        
        for(int i=0;i<N;i++){
            s.insert(A[i]);
        }
        for(int i=1;i<N;i++){
            
            
            if(A[i]>max){
                
                max = A[i];
            }
            if(A[i]<min){
                
                min = A[i];
            }
        }
        
        int ans = (max - min - s.size() + 1);
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) cin >> A[i];
        Solution ob;
        cout << ob.countElements(N, A) << "\n";
    }
}
// } Driver Code Ends
