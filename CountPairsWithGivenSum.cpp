int getPairsCount(int arr[], int n, int k) {
    int res = 0, i, j;
    unordered_map<int,int> m;
    for(i=0;i<n;i++){
        int j = k - arr[i];
        if(m[j]){
            res += m[j];
        }
        m[arr[i]]++;
    }
    return res;
}
