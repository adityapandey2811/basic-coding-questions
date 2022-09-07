bool search(vector<vector<int>> matrix, int n, int m, int x)
{
    // Maza aa gya
    int i = 0, j = m - 1;
    while (i < n && j >= 0)
    {
        if (matrix[i][j] == x)
        {
            return true;
        }
        else if (matrix[i][j] < x)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return false;
}