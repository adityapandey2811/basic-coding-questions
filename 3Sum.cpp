#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int> &nums)
{
    int i, j, k, n = nums.size();
    if (n < 3)
        return {};
    sort(nums.begin(), nums.end());
    vector<vector<int>> v;
    for (i = 0; i + 2 < n; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
        {
            continue;
        }
        j = i + 1;
        k = n - 1;
        while (j < k)
        {
            vector<int> v1;
            if (nums[i] + nums[j] + nums[k] == 0)
            {
                v1 = {nums[i], nums[j], nums[k]};
                v.push_back(v1);
                while (j < k && nums[k] == nums[k - 1])
                    k--;
                k--;
            }
            else if (nums[i] + nums[j] + nums[k] > 0)
                k--;
            else
                j++;
        }
    }
    return v;
}
int main()
{
    int n, i, j;
    cin >> n;
    vector<int> a(n);
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<vector<int>> v = threeSum(a);
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
            cout << v[i][j] << " ";
        cout << endl;
    }
    return 0;
}
