class Solution {
    public int climbStairs(int n) {
        if(n<=3) return n;
        int prev=1,curr=2;
        for(int i=3; i<=n; i++){
            int t=prev+curr;
            prev=curr;
            curr=t;
        }
        return curr;
    }
}