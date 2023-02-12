//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    
    
    // code here
    vector<int> v;
    int i=0,j=n-1;
    for(int k=0;k<n;k++){
        if(arr[i]!=x)
          i++;
        else
          break;
    }
    for(int k=0;k<n;k++){
        if(arr[j]!=x)
          j--;
        else
          break;
    }
    if(j<0){
    v.push_back(-1);
    v.push_back(-1);
    return v;
    }
    v.push_back(i);
    v.push_back(j);
    
    return v;

}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends
