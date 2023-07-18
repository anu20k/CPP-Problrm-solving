class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt=0;
        int flag=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==' ' && flag==0){
                cnt=0;
            }
            else if(s[i]==' ' && flag==1){
                break;
                
            }
            else{
                cnt++;
                flag=1;
            }
            
        }

        return cnt;
    }
};
