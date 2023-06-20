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
