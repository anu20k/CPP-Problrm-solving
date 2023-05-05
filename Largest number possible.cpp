//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string findLargest(int N, int S){
        // code here
        
        if(S==0 && N!=1){
            return "-1";
        }
        
        vector<int>nums={9,8,7,6,5,4,3,2,1,0};
        string result;
        int sum=0;
        
        for(int j=0;j<N;j++){
            
            for(int i=0;i<nums.size();i++){
                
                if(sum+nums[i]<=S){
                    sum+=nums[i];
                    result=result+ to_string(nums[i]);
                    break;
                }
            }
            
        }
        
        if(sum==S){
            return result;
        }
        return "-1";
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;
        
        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
