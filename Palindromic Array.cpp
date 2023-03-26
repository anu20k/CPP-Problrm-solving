//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:

      int palindrome(int num){
          
          int ans=0;
          
          while(num>0){
              int digit = num%10;
              ans= ans*10 + digit;
              num = num /10;
              
          }
          return ans;
      }
      
    int PalinArray(int a[], int n)
    {
    	// code here
    	int count = 0;
    	for(int i=0;i<n;i++){
    	    
    	    
    	   
    	    int ans1 = palindrome(a[i]);
    	  
    	    if(ans1 !=a[i]){
    	        return 0;
    	    }
    	    ans1=0;
    	    
    	}
    	return 1;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends
