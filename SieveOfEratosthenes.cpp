vector<int> primeRange(int m, int n) {
    bool prime[n+1];
    int i,p;
    memset(prime,true,sizeof(prime));
    for(p = 2;p*p<=n;p++){
        if(prime[p]){
            for(i = p*p;i<=n;i+=p){
                prime[i] = false;
            }
        }
    }
    vector<int> res;
    for(i=2;i<=n;i++){
        if(prime[i] && i >= m)
            res.push_back(i);
    }
    return res;
}
