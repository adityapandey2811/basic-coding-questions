int longSubarrWthSumDivByK(int arr[], int n, int k){
    int i,j,maxLen = 0,currSum = 0,mod;
    unordered_map<int,int> modMap;
    for(i=0;i<n;i++){
        currSum+=arr[i];
        mod = ((currSum%k)+k)%k;
        if(mod==0)
            maxLen=i+1;
        else if(modMap.find(mod) == modMap.end()){
            modMap[mod] = i;
        }
        else{
            maxLen = max(maxLen,i-modMap[mod]);
        }
    }
    return maxLen;
}
