class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        unordered_set<string> st;

        for(const auto &x:nums){
            st.insert(x);
        }
        int sz=nums[0].size();
        int n=pow(2,sz);
        for (int i = 0; i <= n; i++) {
            string s ;
            int j = i;
            while (j > 0) {
                if (j % 2) {
                    s.push_back('1');
                } else {
                    s.push_back('0');
                }
                j = j >> 1;
            }
            for (int j = s.size(); j < sz; j++) {
                s.push_back('0');
            }
            reverse(s.begin(), s.end());
            if(st.find(s)==st.end())
                return s;
        }
        return " ";
    }
};