int maxSubArray(vector<int>& nums) {
        vector<int>::iterator it;
        int curSum = 0, maxSum = INT_MIN;
        for(it = nums.begin();it<nums.end();it++){
            curSum+=*it;
            if(curSum > maxSum)
                maxSum = curSum;
            if(curSum < 0)
                curSum = 0;
        }
        return maxSum;
    }
