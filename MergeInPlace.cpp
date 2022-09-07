void merge(vector<int> &v1, int n, vector<int> &v2, int m)
{
    int i = n - 1, j = m - 1, k = m + n - 1;
    while (i >= 0 & j >= 0)
    {
        if (v1[i] <= v2[j])
        {
            v1[k] = v2[j];
            j--;
        }
        else
        {
            v1[k] = v1[i];
            i--;
        }
        k--;
    }
    while (i >= 0)
    {
        v1[k] = v1[i];
        k--;
        i--;
    }
    while (j >= 0)
    {
        v1[k] = v2[j];
        k--;
        j--;
    }
}
