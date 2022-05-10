vector<int> missingNumber(vector<int> &v)
{
    vector<int> res(2);
    int i, j, k;
    int arr[v.size() + 1] = {0};
    for (i = 0; i < v.size(); i++)
    {
        arr[v[i]]++;
    }
    for (i = 1; i <= v.size(); i++)
    {
        if (arr[i] == 0)
        {
            res[1] = i;
        }
        else if (arr[i] == 2)
        {
            res[0] = i;
        }
    }
    return res;
}
