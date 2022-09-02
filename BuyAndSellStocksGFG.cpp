vector<vector<int>> stockBuySell(vector<int> a, int n)
{
    int i, bi = 0, si = 0, buy = a[0], sell = a[0];
    vector<vector<int>> v;
    for (i = 1; i < n; i++)
    {
        if (sell > a[i])
        {
            vector<int> v1;
            if (bi != si)
            {
                v1.push_back(bi);
                v1.push_back(si);
                v.push_back(v1);
            }
            buy = a[i];
            sell = a[i];
            bi = i;
            si = i;
        }
        else
        {
            sell = a[i];
            si = i;
        }
    }
    if (bi != si)
    {
        vector<int> v1;
        v1.push_back(bi);
        v1.push_back(si);
        v.push_back(v1);
    }
    return v;
}