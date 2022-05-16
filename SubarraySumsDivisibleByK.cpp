//Both Solutions Work Fine Pick Anyone You Like

//Old Solution
int subarraysDivByK(vector<int>& A, int K) {
    int i,j,v=0,x=0;
    int remFreq[K];
    memset(remFreq,0,sizeof(remFreq));
    remFreq[0]++;
    for(i=0;i<A.size();i++){
        v+=A[i];
        remFreq[((v%K)+K)%K]++;
    }
    for(i=0;i<K;i++){
        if(remFreq[i]>1){
            x+=(remFreq[i]*(remFreq[i]-1))/2;
        }
    }

    return x;
}

//New Solution
int subarraysDivByK(vector<int>& nums, int k) {
    unordered_map<int,int> modMap;
    int i,j,n = nums.size(),maxArr = 0, currSum = 0,mod;
    for(i=0;i<n;i++){
        currSum += nums[i];
        mod = ((currSum%k)+k)%k;
        if(modMap.find(mod) != modMap.end()){
            if(mod == 0){
                modMap[mod]++;
                maxArr += modMap[mod];
            }
            else{
                maxArr += modMap[mod];
                modMap[mod]++;
            }
        }
        else{
            if(mod == 0){
                modMap[mod] = 1;
                maxArr += 1;
            }
            else{
                modMap[mod] = 1;
            }
        }
    }
    return maxArr;
}
