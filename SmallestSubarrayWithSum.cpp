int smallestSubWithSum(int a[], int n, int x)
{
    int i = 0, j = 0, k, s = INT_MAX, cs = 0, m = INT_MAX, cm = 0;
    while (j <= n && i <= j)
    {
        if (cs <= x)
        {
            cs += a[j];
            j++;
            cm++;
        }
        else
        {
            m = min(cm, m);
            cs -= a[i];
            i++;
            cm--;
        }
    }
    return m;
}