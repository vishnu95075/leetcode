class Solution {
public:
    int const MOD = 1e9+7;

    int countHomogenous(string s) {
        int ans=0;
        int n=s.size();
        int i=0;
        while(i<n){
            long long cnt=0;
            char ch = s[i];
            while(ch==s[i]){
                i++;
                cnt++;
            }
            ans = (ans%MOD )+(cnt*(cnt+1)/2)%MOD;
        }
        return ans;
    }
};