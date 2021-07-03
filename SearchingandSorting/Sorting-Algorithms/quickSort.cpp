// TC : best case: O(nlogn)
// TC : worst case: O(n^2)
// SC : average case: O(logn) 
// SC : worst case: O(n) 
// fast, in-place algo
// not a stable algorithm

#include <bits/stdc++.h>
using namespace std;

int partition(int *arr, int beg, int end)
{
    /* randomised partition :
        pIndex = random(beg, end)
        swap(arr[pIndex], arr[end])
        // avoiding worst case
    */
    int pIndex = beg;
    int pivot = arr[end];
    for (int i = beg; i < end; i++)
    {
        if (arr[i] <= pivot)
        {
            int temp = arr[i];
            arr[i] = arr[pIndex];
            arr[pIndex] = temp;
            pIndex++;
        }
    }
    int temp = arr[pIndex];
    arr[pIndex] = arr[end];
    arr[end] = temp;
    return pIndex;
}

void quickSort(int *arr, int beg, int end)
{
    if (beg < end)
    {
        /* randomised partition :
            call randomisedPartition(arr, beg, end)
        // avoiding worst case
    */
        int pIndex = partition(arr, beg, end);
        quickSort(arr, beg, pIndex-1);
        quickSort(arr, pIndex+1, end);
    }
}

int main()
{
    int n, arr[n];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}