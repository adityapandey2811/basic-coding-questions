    int maxProduct(vector<int>& nums) {
        int i,prod=INT_MIN,temp=1;
        vector<int> left(nums.size());
        vector<int> right(nums.size());
        for(i=0;i<nums.size();i++){
            temp *= nums[i];
            left[i] = temp;
            if(prod < temp){
                prod = temp;
            }
            if(temp == 0){
                temp = 1;
            }
        }
        temp=1;
        for(i=nums.size()-1;i>=0;i--){
            temp *= nums[i];
            right[i] = temp;
            if(prod < temp){
                prod = temp;
            }
            if(temp == 0){
                temp = 1;
            }
        }
        return prod;
    }
