//{ Driver Code Starts
#include <iostream>
using namespace std;

long long int longestSubarry(long long int *arr, long long int n);

// Driver code
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << longestSubarry(arr, n) << endl;
    }
    return 0;
}

// } Driver Code Ends


long long int longestSubarry(long long int A[], long long int N) {
    
    
    long long int ans=0;
    long long int count=0;
    
    for(long long int i=0;i<N; i++){
        
        if(A[i]>0){
            count++;
        }
        else{
            ans = max(ans, count);
            count=0;
        }
        
    }
     ans = max(ans, count);
    return ans;
}
