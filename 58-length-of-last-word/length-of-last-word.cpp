class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int ans=0;
        bool f=false;
        for(int i=n-1; i>=0; i--){
            if(s[i]==' ' && f){
                break;
            }
            else if(s[i]!=' '){
                f=true;
            }

            if(f)
                ans++;
        }
        return ans;
    }
};