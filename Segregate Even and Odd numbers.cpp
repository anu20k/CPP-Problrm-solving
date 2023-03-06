//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	

	void segregateEvenOdd(int arr[], int n) {
	    // code here
	    int temp1[n];
	    int temp2[n];
	    int j=0;
	    int count=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]%2==0){
	            temp1[count++]=arr[i];
	        }
	        else{
	            temp2[j++]=arr[i];
	        }
	    }
	    sort(temp1, temp1+count);
	    sort(temp2, temp2+j);
	    int k=0;
	    for(int i=0;i<count;i++){
	        arr[k++]=temp1[i];
	    }
	    for(int i=0;i<j;i++){
	        arr[k++]=temp2[i];
	    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.segregateEvenOdd(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
