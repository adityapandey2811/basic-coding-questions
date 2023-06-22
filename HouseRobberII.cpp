//DP Solution with Tabulation and Space Optimization
#include<bits/stdc++.h>
long long int houseRobber(vector<int> &v) {
    long long int left, right, n = v.size(), i, prev, prev2, tprev, tprev2;
    if(n == 1) return v[0];
    vector<int> t1, t2;
    for(i=0;i<n;i++){
        if(i!=0) t1.push_back(v[i]);
        if(i!=n-1) t2.push_back(v[i]);
    }
    prev = t1[0];
    tprev = t2[0];
    for(i=1;i<n-1;i++){
        //Without First Element
        left = t1[i];
        if(i > 1) left += prev2;
        right = prev;
        prev2 = prev;
        prev = max(left, right);
        //Without Last Element
        left = t2[i];
        if(i > 1) left += tprev2;
        right = tprev;
        tprev2 = tprev;
        tprev = max(left, right);
    }
    return max(prev, tprev);
}

//DP Solution with Tabulation
#include<bits/stdc++.h>
long long int houseRobber(vector<int> &v) {
    long long int left, right, n = v.size(), i;
    if(n == 1) return v[0];
    vector<int> t1, t2;
    for(i=0;i<n;i++){
        if(i!=0) t1.push_back(v[i]);
        if(i!=n-1) t2.push_back(v[i]);
    }
    vector<long long int> dp(n-1), dp2(n-1);
    dp[0] = t1[0];
    dp2[0] = t2[0];
    for(i=1;i<n-1;i++){
        //Without First Element
        left = t1[i];
        if(i > 1) left += dp[i-2];
        right = dp[i-1];
        dp[i] = max(left, right);
        //Without Last Element
        left = t2[i];
        if(i > 1) left += dp2[i-2];
        right = dp2[i-1];
        dp2[i] = max(left, right);
    }
    return max(dp[n-2], dp2[n-2]);
}

//DP Solution with Memoization
#include <bits/stdc++.h> 
long long int findRes(vector<int>& arr, int n, vector<long long int>& dp) {
    long long int left, right;
    if(n == 0) return arr[0];
    if(dp[n] != -1) return dp[n];
    left = arr[n];
    if(n>1)
        left += findRes(arr, n-2, dp);
    right = findRes(arr, n-1, dp);
    return dp[n] = max(left, right);
}
long long int houseRobber(vector<int>& v) {
    vector<int> t1,t2;
    int n = v.size();
    vector<long long int> dp(n+1, -1), dp2(n+1, -1);
    if(n == 1) return v[0];
    for(int i=0;i<n;i++){
        if(i != 0) t1.push_back(v[i]);
        if(i != n-1) t2.push_back(v[i]);
    }
    return max(findRes(t1,t1.size()-1,dp), findRes(t2,t2.size()-1,dp2));
}
