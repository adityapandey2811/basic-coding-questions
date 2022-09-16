int removeDuplicates(vector<int>& nums) {
    if(nums.size() == 0){
        return 0;
    }
    int i,j = 1,k = 1,n = nums.size(),prev = nums[0];
    for(i=1;i<n;i++){
        if(prev == nums[i]){
            continue;
        }
        else{
            prev = nums[i];
            nums[j] = prev;
            j++;
            k++;
        }
    }
    return k;
}
