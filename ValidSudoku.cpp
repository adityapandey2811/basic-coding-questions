class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> rowSet[9], colSet[9], boxSet[9];
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                char num = board[i][j];
                if (num == '.') continue;
                int boxIndex = (i / 3) * 3 + (j / 3);
                if (rowSet[i].count(num) || colSet[j].count(num) || boxSet[boxIndex].count(num)) {
                    return false;
                }        
                rowSet[i].insert(num);
                colSet[j].insert(num);
                boxSet[boxIndex].insert(num);
            }
        }
        return true;
    }
};
