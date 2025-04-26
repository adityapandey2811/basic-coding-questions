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

//O(NlogN) Solution
class Solution {
    public int lengthOfLIS(int[] nums) {
        List<Integer> lis = new ArrayList<>();
        lis.add(nums[0]);
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] > lis.get(lis.size() - 1)) {
                lis.add(nums[i]);
            } else {
                int idx = Collections.binarySearch(lis, nums[i]);
                if (idx < 0) {
                    idx = -(idx + 1);
                }
                lis.set(idx, nums[i]);
            }
        }
        return lis.size();
    }
}
