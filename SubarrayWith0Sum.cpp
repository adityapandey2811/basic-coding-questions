bool subArrayExists(int arr[], int n)
{
    unordered_map<int, int> m;
    int temp[n];
    int i, sum = 0;
    for(i=0;i<n;i++){
        if(arr[i] == 0)
            return true;
        sum+=arr[i];
        temp[i] = sum;
        m[temp[i]]++;
    }
    if(sum == 0){
        return true;
    }
    for(auto it = m.begin(); it != m.end(); it++){
        if(it->second > 1 || it->first == 0){
            return true;
        }
    }
    return false;
}
