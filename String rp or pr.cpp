//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
//User function Template for C++
class Solution{   
public:
    long long solve(int X,int Y,string s){
      //code here
      stack<char> st,st2;
      st.push(s[0]);
      long long ans=0,pp=0,rr=0;
      
      if(X>Y){
          for(int i=1;i<s.size();i++){
              if(st.size()!=0 && s[i]=='r' && st.top()=='p'){
                  pp++;
                  st.pop();
              }else st.push(s[i]);
              
              
              //cout<<ans<<" ";
          }
          st2.push(st.top());
           st.pop();
           while(!st.empty()){
               if(!st2.empty() && (st2.top()=='p' && st.top()=='r'))
                    {
                        st.pop();
                        rr++;
                        st2.pop();
                    }
                else
                    {
                        st2.push(st.top());
                        st.pop();
                    }
                }
           }
           
          
      else {
          for(int i=1;i<s.size();i++){
              if(st.size()!=0 && s[i]=='p' && st.top()=='r'){
                  rr++;
                  st.pop();
              }else st.push(s[i]);
          }
           st2.push(st.top());
           st.pop();
           while(!st.empty()){
               if(!st2.empty() && (st2.top()=='r' && st.top()=='p'))
                    {
                        st.pop();
                        pp++;
                        st2.pop();
                    }
                else
                    {
                        st2.push(st.top());
                        st.pop();
                    }
                    
           }
           
                    
                }
      
      
      return pp*X+rr*Y;
    }
};

//{ Driver Code Starts.
signed main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int X,Y;
      cin>>X>>Y;
      string S;
      cin>>S;
      Solution obj;
      long long answer=obj.solve(X,Y,S);
      cout<<answer<<endl;
  }
}
// } Driver Code Ends
