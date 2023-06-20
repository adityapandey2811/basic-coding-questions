// DP Solution using Memoization
#include <bits/stdc++.h> 
int fr(int n, vector<int> &heights, vector<int>& dp){
    int left, right = INT_MAX;
    if(n == 0) return 0;
    if(dp[n] != -1) return dp[n];
    left = fr(n-1, heights, dp) + abs(heights[n] - heights[n-1]);
    if(n != 1)
    right = fr(n-2, heights, dp) + abs(heights[n] - heights[n-2]);
    return dp[n] = min(left, right);
}
int frogJump(int n, vector<int> &heights)
{
    vector<int> dp(n+1, -1);
    return fr(n-1, heights, dp);
}

// Lame Solution
#include <bits/stdc++.h> 
int fr(int n, vector<int> &heights){
    int left, right = INT_MAX;
    if(n == 0) return 0;
    left = fr(n-1, heights) + abs(heights[n] - heights[n-1]);
    if(n != 1)
    right = fr(n-2, heights) + abs(heights[n] - heights[n-2]);
    return min(left, right);
}
int frogJump(int n, vector<int> &heights)
{
    return fr(n-1, heights);
}
