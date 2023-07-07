//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here
            
            vector<int>temp;
            for(int i=0;i<n;i++){
                temp.push_back(arr1[i]);
            }
            for(int i=0;i<m;i++){
                temp.push_back(arr2[i]);
            }
            
            sort(temp.begin(), temp.end());
            
            int i=0;
            
            for(i=0;i<n;i++){
                arr1[i]=temp[i];
            }
            for(int j=0;j<m;j++){
                arr2[j] = temp[i];
                i++;
            }
            
        } 
};

//{ Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 

// } Driver Code Ends
