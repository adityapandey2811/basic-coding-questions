#include <bits/stdc++.h>
using namespace std;
int maxArea(vector<int> &height)
{
    int i, j, k, n = height.size(), maxValue = 0, tempArea = 0;
    if (n == 0)
        return 0;
    i = 0;
    j = n - 1;
    while (i < j)
    {
        tempArea = (j - i) * min(height[j], height[i]);
        maxValue = max(maxValue, tempArea);
        if (height[i] > height[j])
            j--;
        else
            i++;
    }
    return maxValue;
}
int main()
{
    int n, i;
    cin >> n;
    vector<int> a(n);
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << maxArea(a) << endl;
    return 0;
}
