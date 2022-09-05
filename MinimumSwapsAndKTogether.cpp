int minSwap(int arr[], int n, int k){
    int i, j, l, r, count = 0, res = INT_MAX, ans = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] <= k)
        {
            count++;
        }
    }
    for (i = 0; i < count; i++)
    {
        if (arr[i] > k)
        {
            ans++;
        }
    }
    res = ans;
    for (i = 0, j = count; j < n; i++, j++)
    {
        if (arr[i] > k)
        {
            ans--;
        }
        if (arr[j] > k)
        {
            ans++;
        }
        res = min(res, ans);
    }
    return res;
}
