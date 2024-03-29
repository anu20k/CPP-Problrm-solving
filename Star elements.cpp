//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

vector<int> getStarAndSuperStar(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        vector<int> ans = getStarAndSuperStar(arr, n);
        for (int i=1;i<ans.size();i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
        cout << ans[0] << "\n";
    }
    return 0;
}

// } Driver Code Ends


vector<int> getStarAndSuperStar(int arr[], int n) {
    // code here   
    
    
    int max_ele =INT_MIN;
    vector<int>ans;
    
    for(int i=n-1;i>=0;i--){
        if(arr[i]>max_ele){
            max_ele = arr[i];
            ans.push_back(max_ele);
        }
    }
    
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==max_ele){
            cnt++;
        }
    }
    
    if(cnt>1){
        ans.push_back(-1);
    }
    else{
        ans.push_back(max_ele);
    }
    
    reverse(ans.begin(), ans.end());
    
    return ans;

    
}
