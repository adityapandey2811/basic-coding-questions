vector<int> JobScheduling(Job arr[], int n)
{
    int i, j, count = 0, profit = 0;
    bool slot[n] = {false};
    vector<pair<int, int>> v;
    for (i = 0; i < n; i++)
    {
        v.push_back(make_pair(arr[i].profit, arr[i].dead));
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for (i = 0; i < n; i++)
    {
        for (j = min(v[i].second, n) - 1; j >= 0; j--)
        {
            if (slot[j] == false)
            {
                count++;
                profit += v[i].first;
                slot[j] = true;
                break;
            }
        }
    }
    return {count, profit};
}
