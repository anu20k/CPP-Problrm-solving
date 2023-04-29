//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string transform(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << transform(s) << endl;
    }
return 0;
}


// } Driver Code Ends


string transform(string S){
    //complete the function here
    
    for(int i=0;i<S.size();i++){
        S[i] = tolower(S[i]);
    }
    
    stack<char>st;
    string ans="";
    st.push(S[0]);
    int i=1;
    while(i<S.size()){
        
        if(st.top()==S[i]){
            st.push(S[i]);
        }
        else{
            int temp = st.size();
            string size = to_string(temp);
            ans = ans+size;
            ans.push_back(st.top());
            
            while(!st.empty()){
                st.pop();
            }
            st.push(S[i]);
        }
        i++;
        
    }
    int temp = st.size();
            string size = to_string(temp);
            ans = ans+size;
            ans.push_back(st.top());
    return ans;
    
    
}

