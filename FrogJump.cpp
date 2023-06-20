//Space Optimized DP Solution using Tabulation
#include <bits/stdc++.h> 
int frogJump(int n, vector<int> &heights)
{
    int prev = 0, prev2 = 0, curi = 0;
    for(int i=1;i<n;i++){
        int fs = prev + abs(heights[i] - heights[i-1]);
        int ss = INT_MAX;
        if(i > 1) ss = prev2 + abs(heights[i] - heights[i-2]);
        curi  = min(fs,ss);
        prev2 = prev;
        prev = curi;
    }
    return prev;
}

// DP Solution using Tabulation
#include <bits/stdc++.h> 
int frogJump(int n, vector<int> &heights)
{
    vector<int> dp(n, 0);
    for(int i=1;i<n;i++){
        int fs = dp[i-1] + abs(heights[i] - heights[i-1]);
        int ss = INT_MAX;
        if(i > 1) ss = dp[i-2] + abs(heights[i] - heights[i-2]);
        dp[i] = min(fs,ss);
    }
    return dp[n-1];
}

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
