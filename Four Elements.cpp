//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

bool find4Numbers(int A[], int n, int X);

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, x;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin>>x;
        cout << find4Numbers(a, n, x) << endl;

    }
    return 0;
}
// } Driver Code Ends


//User function Template for C++

bool find4Numbers(int A[], int n, int X)  
{
    sort(A, A+n);
     for(int i=0;i<n;i++){
         
         for(int j=i+1;j<n;j++){
             
             int temp = A[i]+A[j];
             int a = j+1;
             int b= n-1;
             
             while(a<b){
                 
                 if(X- temp == A[a]+A[b]){
                     return 1;
                     a++;
                     b--;
                     
                 }
                 else if(X- temp > A[a]+A[b]){
                     a++;
                 }
                 else{
                     b--;
                 }
                 
             }
             
         }
     }
     return 0;
    
}
