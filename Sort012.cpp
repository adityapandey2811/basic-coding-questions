void sortColors(vector<int>& nums) {
    int i = 0, j = nums.size() - 1, k = 0;
    while(j>i && nums.size() > k && j>=k){
        if(nums[k] == 0){
            swap(nums[i],nums[k]);
            i++;
        }
        else if(nums[k] == 2){
            swap(nums[k], nums[j]);
            j--;
            k--;
        }
        k++;
    }
}
