//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    // Your code here
    int sum=0;
    int ans=0;
    while(n>0){
        int digit = n%10;
        if(digit == 0){
            digit=5;
        }
        sum = sum*10 +digit;
        n=n/10;
    }
    while(sum>0){
        int digit = sum%10;
        
        ans = ans*10 +digit;
        sum=sum/10;
    }
    
    return ans;
    
}
