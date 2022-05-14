//Using Priority Queue
#include <bits/stdc++.h>
using namespace std;
int kthSmallest(int arr[], int l, int r, int k)
{
    int i, n = r + 1;
    priority_queue<int> maxHeap;
    for (i = 0; i < k; i++)
    {
        maxHeap.push(arr[i]);
    }
    for (i; i < n; i++)
    {
        if (arr[i] < maxHeap.top())
        {
            maxHeap.pop();
            maxHeap.push(arr[i]);
        }
    }
    return maxHeap.top();
}
int main()
{
    int n, i, k;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> k;
    cout << kthSmallest(a, 0, n - 1, k) << endl;
    return 0;
}
