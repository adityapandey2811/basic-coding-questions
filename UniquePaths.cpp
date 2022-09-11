int uniquePaths(int m, int n) {
    int arr[n][m];
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(i == 0 || j == 0)
                arr[i][j] = 1;
            else
                arr[i][j] = arr[i-1][j] + arr[i][j-1];
        }
    }
    return arr[n-1][m-1];
}
