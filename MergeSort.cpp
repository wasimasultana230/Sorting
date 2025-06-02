#include <iostream>
#include <algorithm>
using namespace std;
void conquer(int arr[], int si, int mid, int ei)
{
    int size = (ei - si + 1);
    int newArray[size];
    int idx1 = si;
    int idx2 = mid + 1;
    int x = 0;
    while (idx1 <= mid && idx2 <= ei)
    {
        if (arr[idx1] <= arr[idx2])
        {
            newArray[x++] = arr[idx1++];
        }
        else
        {
            newArray[x++] = arr[idx2++];
        }
    }
    while (idx1 <= mid)
    {
        newArray[x++] = arr[idx1++];
    }
    while (idx2 <= ei)
    {
        newArray[x++] = arr[idx2++];
    }

    for (int i = 0, j = si; i < size; i++, j++)
    {
        arr[j] = newArray[i];
    }
}
void divide(int arr[], int si, int ei)
{
    if (si >= ei)
    {
        return;
    }
    int mid = si + (ei - si) / 2;
    divide(arr, si, mid);
    divide(arr, mid + 1, ei);
    conquer(arr, si, mid, ei);
}
int main()
{
    cout << "Enter array size : ";
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    divide(arr, 0, n - 1);
    // mergr sort in ascending order
    cout << "Sort in ascending order : \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}