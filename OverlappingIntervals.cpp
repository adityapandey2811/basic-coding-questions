#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> overlappedInterval(vector<vector<int>> &intervals)
{
    int i, j, k, n, x, y;
    vector<vector<int>> res;
    sort(intervals.begin(), intervals.end());
    x = intervals[0][0];
    y = intervals[0][1];
    for (i = 1; i < intervals.size(); i++)
    {
        if (y >= intervals[i][0])
        {
            if (y >= intervals[i][1])
            {
                continue;
            }
            else
            {
                y = intervals[i][1];
            }
        }
        else
        {
            vector<int> v1;
            v1.push_back(x);
            v1.push_back(y);
            res.push_back(v1);
            x = intervals[i][0];
            y = intervals[i][1];
        }
    }
    vector<int> v1;
    v1.push_back(x);
    v1.push_back(y);
    res.push_back(v1);
    return res;
}

int main()
{
    int n, i, j, k, input;
    cin >> n;
    vector<vector<int>> a;
    for (i = 0; i < n; i++)
    {
        vector<int> v1;
        for (int j = 0; j < 2; j++)
        {
            cin >> input;
            v1.push_back(input);
        }
        a.push_back(v1);
    }
    a = overlappedInterval(a);
    for (i = 0; i < a.size(); i++)
    {
        for (j = 0; j < 2; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
