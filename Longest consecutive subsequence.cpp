//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
          sort(arr, arr+N);
          int cnt=1;
          int max_count =1 ;
          for(int i=0;i<N-1;i++){
              
              if(arr[i+1]-arr[i] == 1){
                  cnt ++;
              }
              else if(arr[i+1]-arr[i] == 0){
                  continue;
              }
              else{
                  max_count = max(cnt, max_count);
                  cnt=1;
              }
          }
           max_count = max(cnt, max_count);
      return max_count;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends
