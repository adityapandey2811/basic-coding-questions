int maxSubArray(vector<int>& nums) {
        int i;
        int curSum = 0, maxSum = INT_MIN;
        vector<int>::iterator it = nums.begin();
        while(it!=nums.end()){
            curSum+=*it;
            if(curSum > maxSum)
                maxSum = curSum;
            if(curSum < 0)
                curSum = 0;
            it++;
        }
        return maxSum;
    }
