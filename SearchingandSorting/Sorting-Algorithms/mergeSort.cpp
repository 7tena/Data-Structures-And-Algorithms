// worst case : O(nlogn)
// best case : O(nlogn)
// Not In-place algorithm, extra memory is required for sorting data
// divide and conquer algorithm
// recursive algorithm

#include <bits/stdc++.h>
using namespace std;

void mergeArray(int *arr, int *l, int *r, int ll, int rl)
{
    int i, j, k;
    i = j = k = 0;
    while (i < ll && j < rl)
    {
        if (l[i] <= r[j])
        {
            arr[k] = l[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = r[j];
            j++;
            k++;
        }
        while (i < ll)
        {
            arr[k] = l[i];
            i++;
            k++;
        }
        while (j < rl)
        {
            arr[k] = r[j];
            k++;
            j++;
        }
    }
}

void mergeSort(int *arr, int n)
{
    int mid = (n/2);
    if (n < 2)
    {
        return ; // A void() cannot return a value that can be used. But it can return a value which is void without giving an error.
    }
    int larr[mid], rarr[n - mid];
    for (int i = 0; i < mid; i++)
    {
        larr[i] = arr[i];
    }
    for (int i = mid; i < n; i++)
    {
        rarr[i - mid] = arr[i];
    }
    mergeSort(larr, mid);
    mergeSort(rarr, n - mid);
    mergeArray(arr, larr, rarr, mid, n - mid);
}

int main()
{
    int n, arr[n];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergeSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}