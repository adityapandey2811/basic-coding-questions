int maxLen(vector<int>&A, int n)
{   
    unordered_map<int, int> mp;
    int i, count = 0, sum = 0;
    for(i=0;i<A.size();i++){
        sum += A[i];
        if(sum == 0){
            count = i + 1;
        }
        else if(mp.find(sum) == mp.end()){
            mp[sum] = i;
        }
        else{
            count = max((i - mp[sum]), count);
        }
    }
    return count;
}
