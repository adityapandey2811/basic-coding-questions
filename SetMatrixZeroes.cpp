// Optimal Solution
void setZeroes(vector<vector<int>>& matrix) {
        int row = 1, col = 1, i, j;
        for(i=0;i<matrix.size();i++){
            if(matrix[i][0] == 0){
                col = 0;
            }
        }
        for(j=0;j<matrix[0].size();j++){
            if(matrix[0][j] == 0){
                row = 0;
            }
        }
        for(i=1;i<matrix.size();i++){
            for(j=1;j<matrix[0].size();j++){
                if(matrix[i][j] == 0){
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }
        for(i=1;i<matrix.size();i++){
            for(j=1;j<matrix[0].size();j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
        if(col == 0){
            for(i=0;i<matrix.size();i++){
                matrix[i][0] = 0;
            }
        }
        if(row == 0){
            for(j=0;j<matrix[0].size();j++){
                matrix[0][j] = 0;
            }
        }
    }


// Lame Solution
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
