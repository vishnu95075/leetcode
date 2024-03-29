class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
       int maxEle=0;

        for(int num:nums){
            maxEle=max(num,maxEle);
        }

        int ans=0;
        int start=0;
        int end=0;
        int n=nums.size();
        int fcnt=0;

        long long count=0;

        while(end<n){
            if(maxEle==nums[end]) fcnt++;

            while(fcnt==k){
                count+=(n-end);
                if(nums[start]==maxEle) fcnt--;
                start++;
            }

            end++;

        }

        return count;
    }
};