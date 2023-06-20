// DP Solution using Memoization
#include <bits/stdc++.h> 
int fr(int i, vector<int> &nums, vector<int>& dp){
    int left, right = INT_MIN;
    if(i == 0) return nums[i];
    if(dp[i] != -1) return dp[i];
    left = nums[i];
    if(i > 1)
        left += fr(i-2, nums, dp);
    if(i > 0)
        right = nums[i-1];
    if(i > 2)
        right += fr(i-3, nums, dp);
    return dp[i] = max(left, right);
}
int maximumNonAdjacentSum(vector<int> &nums){
    vector<int> dp(nums.size()+1, -1);
    return fr(nums.size()-1, nums, dp);
}

// Lame Solution
#include <bits/stdc++.h> 
int fr(int i, vector<int> &nums){
    int left, right = INT_MIN;
    if(i == 0) return nums[i];
    left = nums[i];
    if(i > 1)
        left += fr(i-2, nums);
    if(i > 0)
        right = nums[i-1];
    if(i > 2)
        right += fr(i-3, nums);
    return max(left, right);
}
int maximumNonAdjacentSum(vector<int> &nums){
    return fr(nums.size()-1, nums);
}
