#include <iostream>
#include <algorithm>
using namespace std;
void conquer(int arr[], int st, int mid, int ed)
{
    int size = (ed - st + 1);
    int newArray[size];
    int idx1 = st;
    int idx2 = mid + 1;
    int x = 0;
    while (idx1 <= mid && idx2 <= ed)
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
    while (idx2 <= ed)
    {
        newArray[x++] = arr[idx2++];
    }

    for (int i = 0, j = st; i < size; i++, j++)
    {
        arr[j] = newArray[i];
    }
}
void divide(int arr[], int st, int ed)
{
    if (st >= ed)
    {
        return;
    }
    int mid = st + (ed - st) / 2;
    divide(arr, st, mid);
    divide(arr, mid + 1, ed);
    conquer(arr, st, mid, ed);
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