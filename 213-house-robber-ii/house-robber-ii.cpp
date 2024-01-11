class Solution {
private:
    int solve(int n, vector<int>& nums, vector<int>& dp) {

        if (n < 0)
            return 0;
        if (n == 0)
            return nums[0];

        if (dp[n] != -1)
            return dp[n];

        int picked = nums[n] + solve(n - 2, nums, dp);
        int notPicked = 0 + solve(n - 1, nums, dp);

        return dp[n] = max(picked, notPicked);
    }

public:
    int rob(vector<int>& nums) {

        

        int n = nums.size();
    if(n==1) return nums[0];
        vector<int> temp1;

        for (int i = 1; i < n; i++) {
            temp1.push_back(nums[i]);
        }

        // temp1.push_back(nums[0])

            vector<int>
                temp2;

        // temp2.push_back(nums[n - 1]);
        for (int i = 0; i < n - 1; i++) {
            temp2.push_back(nums[i]);
        }

        int n1=temp1.size();
        int n2=temp1.size();

        vector<int> dp1(n1,-1);
        vector<int> dp2(n2,-1);

        return max(solve(n1-1, temp1, dp1),solve(n2-1, temp2, dp2));
    }
};