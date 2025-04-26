//O(N^2) Solution
class Solution {
    public int lengthOfLIS(int[] nums) {
        int dp[] = new int[nums.length];
        for(int i =0;i<nums.length;i++) {
            dp[i] = 1;
        }
        for(int i=nums.length-1;i>=0;i--) {
            for(int j = i+1;j<nums.length;j++) {
                if(nums[i] < nums[j]) {
                    dp[i] = Math.max(dp[i], 1 + dp[j]);
                }
            }
        }
        int lis = Integer.MIN_VALUE;
        for(int i=0;i<nums.length;i++) {
            lis = Math.max(lis,dp[i]);
        }
        return lis;
    }
}
