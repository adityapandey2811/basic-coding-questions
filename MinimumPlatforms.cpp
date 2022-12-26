int findPlatform(int arr[], int dep[], int n)
{
    sort(arr, arr + n);
    sort(dep, dep + n);
    int i = 0, j = 0, count = 0, max = 0;
    while (i < n && j < n)
    {
        if (arr[i] <= dep[j])
        {
            count++;
            i++;
        }
        else
        {
            count--;
            j++;
        }
        if (count > max)
        {
            max = count;
        }
    }
    return max;
}
