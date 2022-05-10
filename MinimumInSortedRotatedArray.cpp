#include <bits/stdc++.h>
using namespace std;
int findMin(vector<int> &nums)
{
    int i, l = 0, h = nums.size() - 1, mid = (l + h) / 2;
    if (nums.size() == 1)
    {
        return nums[0];
    }
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (mid == nums.size() - 1)
        {
            if (nums[mid] < nums[mid - 1])
            {
                break;
            }
        }

        else if (mid == 0)
        {
            if (nums[mid] < nums[mid + 1])
            {
                break;
            }
        }
        else if (mid != 0)
        {
            if (nums[mid] < nums[mid - 1] && nums[mid] < nums[mid + 1])
            {
                break;
            }
        }
        if (nums[l] <= nums[mid])
        {
            if (nums[h] <= nums[mid])
            {
                l = mid + 1;
            }
            else
            {
                h = mid - 1;
            }
        }
        else
        {
            if (nums[h] >= nums[mid])
            {
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
    }
    return nums[mid];
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
    cout << findMin(a) << endl;
    return 0;
}
