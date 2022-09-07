#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &v1, int n, vector<int> &v2, int m)
{
    int i = n - 1, j = m - 1, k = m + n - 1;
    while (i >= 0 & j >= 0)
    {
        if (v1[i] <= v2[j])
        {
            v1[k] = v2[j];
            j--;
        }
        else
        {
            v1[k] = v1[i];
            i--;
        }
        k--;
    }
    while (i >= 0)
    {
        v1[k] = v1[i];
        k--;
        i--;
    }
    while (j >= 0)
    {
        v1[k] = v2[j];
        k--;
        j--;
    }
}
int main()
{
    vector<int> v1 = {1, 2, 3, 0, 0, 0};
    vector<int> v2 = {2, 5, 6};
    // vector<int> v1 = {1};
    // vector<int> v2 = {};
    merge(v1, 3, v2, 3);
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    return 0;
}