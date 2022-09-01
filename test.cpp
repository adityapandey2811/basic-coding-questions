#include <bits/stdc++.h>
using namespace std;
int minJumps(int a[], int n)
{
    int i = 0, jumps = 0, k = 0, curMax = INT_MIN, index = 0;
    while (a[i] != 0)
    {
        if (a[i] == 1)
        {
            jumps++;
            i += 1;
        }
        else
        {
            if (i >= n - 1)
            {
                return jumps;
            }
            if (i + a[i] >= n - 1)
            {
                return jumps + 1;
            }
            curMax = INT_MIN;
            for (k = i + 1; k <= i + a[i]; k++)
            {
                if (k + a[k] > curMax)
                {
                    curMax = a[k] + k;
                    index = k;
                }
            }
            i = index;
            jumps++;
        }
    }
    return -1;
}
int main()
{
    int a[15] = {9, 10, 1, 2, 3, 4, 8, 0, 0, 0, 0, 0, 0, 0, 1};
    // int a[11] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    // int a[10] = {2, 3, 1, 1, 2, 4, 2, 0, 1, 1};
    cout << minJumps(a, 15);
    return 0;
}