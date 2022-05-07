//Gajab ka question maza aa gya
void nextPermutation(vector<int> &nums)
{
    if (nums.size() == 0 || nums.size() == 1)
        return;
    int i = nums.size() - 2, j, k;
    while (i >= 0)
    {
        if (nums[i] < nums[i + 1])
        {
            j = i;
            break;
        }
        i--;
    }
    if (i == -1)
    {
        reverse(nums.begin(), nums.end());
        return;
    }
    i = nums.size() - 1;
    while (i >= 0)
    {
        if (nums[i] > nums[j])
        {
            k = i;
            break;
        }
        i--;
    }
    swap(nums[j], nums[k]);
    reverse(nums.begin() + j + 1, nums.end());
}
