//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		
 		int cnt=0;
 		int total = n*m;
 		int ans1;
 		int row=0;
 		vector<int>ans;
 		
 		int s_r=0;
 		int e_r=n-1;
 		int s_c=0;
 		int e_c=m-1;
 		
 		
 		while(cnt<total){
 		    
 		    for(int i=s_c;i<=e_c;i++){
 		        ans.push_back(a[s_r][i]);
 		        cnt++;
 		    }
 		    s_r++;
 		    for(int i=s_r;i<=e_r;i++){
 		        ans.push_back(a[i][e_c]);
 		        cnt++;
 		    }
 		    e_c--;
 		    for(int i=e_c;i>=s_c;i--){
 		        ans.push_back(a[e_r][i]);
 		        cnt++;
 		    }
 		    e_r--;
 		    for(int i=e_r;i>=s_r;i--){
 		        ans.push_back(a[i][s_c]);
 		        cnt++;
 		    }
 		    s_c++;
 		   
 		}
 		
 		ans1 = ans[k-1];
 		return ans1;
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends
