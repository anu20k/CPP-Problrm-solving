//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    
    
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        // code here
        int i=0;
        int j=v.size()-1;
        pair<long, long>p;
        p.first=-1;
        p.second=-1;
        while(i<v.size()){
            
            if(v[i]==x){
                p.first=i;
                break;
            }
            
            
            i++;
           
        }
        while(0<=j){
            if(v[j]==x){
                p.second=j;
                break;
            }
            
            j--;
        }
       
        return p;
        
    }
};

//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}

// } Driver Code Ends
