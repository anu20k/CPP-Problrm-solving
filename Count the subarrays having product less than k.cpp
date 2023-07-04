//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        
        long long pro =1;
        long long i=0;
        long long j=0;
        int cnt=0;
        
        while(j<n){
          
            pro*= a[j];
            
            while(i<=j && pro>=k){
                pro/=a[i];
                i++;
            }
            
            if(pro<k){
                cnt+=j-i+1;
            }
            j++;
        }
        
        return cnt;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends
