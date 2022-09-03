string isSubset(int a1[], int a2[], int n, int m) {
    if(m > n){
        return "No";
    }
    int i,j,k;
    unordered_map<int,int> mp;
    for(i=0;i<n;i++){
        mp[a1[i]]++;
    }
    for(i=0;i<m;i++){
        if(mp[a2[i]] || mp[a2[i]] != 0){
            mp[a2[i]]--;
        }
        else{
            return "No";
        }
    }
    return "Yes";
}
