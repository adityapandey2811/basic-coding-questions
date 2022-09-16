int findMaxConsecutiveOnes(vector<int>& nums) {
    if(nums.size() == 0){
        return 0;
    }
    int i, mx = INT_MIN, count = 0;
    for(i=0;i<nums.size();i++){
        if(nums[i] == 0){
            mx = max(mx,count);
            count = 0;
        }
        else{
            count++;
        }
    }
    mx = max(mx,count);
    return mx;
}
