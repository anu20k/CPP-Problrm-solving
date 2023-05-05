//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int closestToZero(int arr[], int n)
        {
            // your code here 
            
            sort(arr, arr+n);
            int i=0;
            int j=n-1;
            int ans=INT_MAX;
            while(i<j){
                
                int sum=arr[i]+arr[j];
                
                if(sum==0){
                    ans=0;
                    return ans;
                }
                else if(sum<0){
                    i++;
                    int x=-sum;
                    int y=abs(ans);
                    if(x<y){
                        ans=sum;
                    }
                }
                else{
                    j--;
                    int x=abs(ans);
                    if(sum<=x){
                        ans=sum;
                    }
                }
                
            }
            return ans;
        }
};

//{ Driver Code Starts.
int main ()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.closestToZero(arr, n) << endl;
    }
}
// } Driver Code Ends
