void setZero(vector<vector<int>>& z, vector<vector<int>>& matrix){
    int i, j, k;
    int n = matrix.size(), m = matrix[0].size();
    for(k=0;k<z.size();k++){
        for(i=0;i<n;i++){
            matrix[i][z[k][1]] = 0;
        }
        for(j=0;j<m;j++){
            matrix[z[k][0]][j] = 0;
        }
    }
}
void setZeroes(vector<vector<int>>& matrix) {
    int n = matrix.size(), m = matrix[0].size();
    int i,j,k;
    vector<vector<int>> z;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(matrix[i][j] == 0){
                vector<int> v;
                v.push_back(i);
                v.push_back(j);
                z.push_back(v);
            }
        }
    }
    setZero(z, matrix);
}
