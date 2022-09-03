#include <bits/stdc++.h>
using namespace std;
int findLongestConseqSubseq(int arr[], int n)
{
    unordered_map<int, int> m;
    int i, j, k, maxC = 1, count;
    for (i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
    for (i = 0; i < n; i++)
    {
        if (m[arr[i] - 1])
        {
            continue;
        }
        else
        {
            count = 0;
            k = i;
            while (m[arr[k] + count])
            {
                count++;
            }
            maxC = max(maxC, count);
        }
    }
    return maxC;
}
int main()
{
    int arr[] = {1, 9, 3, 10, 4, 20, 2};
    int n = 7;
    cout << "Length of the Longest contiguous subsequence is "
         << findLongestConseqSubseq(arr, n);
    return 0;
}