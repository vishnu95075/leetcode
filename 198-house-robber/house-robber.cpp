class Solution {
private:
    int solve(int i,vector<int> &nums,vector<int> &dp){
        if(i<0) return 0;
        if(i==0) return nums[0];

        if(dp[i]!=-1) return dp[i];

        int picked=nums[i]+solve(i-2,nums,dp);
        int notPicked=0+solve(i-1,nums,dp);

        return dp[i] = max(picked,notPicked);
    }

public:
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return solve(nums.size()-1,nums,dp);
    }
};