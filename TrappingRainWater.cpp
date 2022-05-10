#include <bits/stdc++.h>
using namespace std;
int trap(vector<int> &height)
{
    vector<int> left(height.size());
    vector<int> right(height.size());
    int i, res = 0;
    left[0] = height[0];
    right[height.size() - 1] = height[height.size() - 1];
    for (i = 1; i < height.size(); i++)
    {
        if (left[i - 1] > height[i])
        {
            left[i] = left[i - 1];
        }
        else
        {
            left[i] = height[i];
        }
    }
    for (i = height.size() - 2; i >= 0; i--)
    {
        if (right[i + 1] > height[i])
        {
            right[i] = right[i + 1];
        }
        else
        {
            right[i] = height[i];
        }
    }
    for (i = 0; i < height.size(); i++)
    {
        res += min(left[i], right[i]) - height[i];
    }
    return res;
}
int main()
{
    int n, key, i;
    cin >> n;
    vector<int> a(n);
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << trap(a) << endl;
    return 0;
}
