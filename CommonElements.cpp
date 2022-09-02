vector <int> commonElements (int a[], int b[], int c[], int n1, int n2, int n3){
    int i = 0, j = 0, k = 0;
    unordered_map<int,int> m;
    vector<int> v;
    while(i<n1 && j<n2){
       if(a[i] == b[j]){
           m[a[i]]++;
           i++;
           j++;
       }
       else if(a[i] > b[j]){
           j++;
       }
       else{
           i++;
       }
    }
    for(i=0;i<n3;i++){
       if(m[c[i]]){
            if(v.size() >= 1 && v[v.size() - 1] != c[i])
                v.push_back(c[i]);
            else if(v.size() == 0)
                v.push_back(c[i]);
       }
    }
    return v;
}
