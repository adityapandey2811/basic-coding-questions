// With Sorting

bool find3Numbers(int A[], int arr_size, int sum)
{
    if (arr_size < 3)
    {
        return false;
    }
    int l, r;
    sort(A, A + arr_size);
    for (int i = 0; i < arr_size - 2; i++)
    {
        l = i + 1;
        r = arr_size - 1;
        while (l < r)
        {
            if (A[i] + A[l] + A[r] == sum)
            {
                return true;
            }
            else if (A[i] + A[l] + A[r] < sum)
                l++;
            else
                r--;
        }
    }
    return false;
}

// Without Sorting

bool find3Numbers(int a[], int n, int k)
{
    int i, j, sum = 0;
    if (n < 3)
    {
        return false;
    }
    for (i = 0; i < n; i++)
    {
        unordered_set<int> s;
        int curSum = k - a[i];
        for (j = i + 1; j < n; j++)
        {
            if (s.find(curSum - a[j]) != s.end())
            {
                return true;
            }
            s.insert(a[j]);
        }
    }
    return false;
}