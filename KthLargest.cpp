//Using Priority Queue
int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> mini;
        int i;
        for(i=0;i<k;i++){
            mini.push(nums[i]);
        }
        for(i=k;i<nums.size();i++){
            if(nums[i] > mini.top()){
                mini.pop();
                mini.push(nums[i]);
            }
        }
        return mini.top();
    }
