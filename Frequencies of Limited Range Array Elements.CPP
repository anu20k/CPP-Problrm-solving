
#include<bits/stdc++.h>
using namespace std; 


class Solution{
    public:
    
    void frequencyCount(vector<int>& arr,int N, int p)
    { 
        // code here
        int a[p+N];
        
        for(int i=0;i<=p+N;i++){
            a[i]=0;
        }
        
        for(int i=0;i<N;i++){
           
                a[arr[i]]+=1;
           
        }
        
         for(int i=1;i<=N;i++){
           
                arr[i-1]=a[i];
           
        }
        
    }
};




int main() 
{ 
	long long t;
	
	
	cin >> t;
	
	while(t--){
	    
	    int N, P;
	    //size of array
	    cin >> N; 
	    
	    vector<int> arr(N);
	    
	   
	    for(int i = 0; i < N ; i++){
	        cin >> arr[i]; 
	    }
        cin >> P;
        Solution ob;
       
		ob.frequencyCount(arr, N, P); 
		
		
	    for (int i = 0; i < N ; i++) 
			cout << arr[i] << " ";
	    cout << endl;
	}	
	return 0; 
}





// } Driver Code Ends
