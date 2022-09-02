#include <bits/stdc++.h>
using namespace std;
void mergeSort(int a[], int low, int high)
{
    // if (low < high)
    // {
    //     int mid = (low + high) / 2;
    //     mergeSort(a, low, mid);
    //     mergeSort(a, mid + 1, high);
    //     merge(a, low, mid, high);
    // }
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        int i = low, j = mid + 1, k = 0;
        int temp[high - low + 1];
        while (i <= mid && j <= high)
        {
            if (a[i] < a[j])
                temp[k++] = a[i++];
            else
                temp[k++] = a[j++];
        }
        while (i <= mid)
            temp[k++] = a[i++];
        while (j <= high)
            temp[k++] = a[j++];
        for (int i = low, k = 0; i <= high; i++, k++)
            a[i] = temp[k];
    }
}
int main()
{
    int a[5] = {1, 5, 3, 2, 4};
    mergeSort(a, 0, 4);
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    return 0;
}