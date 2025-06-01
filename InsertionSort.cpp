#include <iostream>
using namespace std;
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
    // insertion sort in ascending order
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
    cout << "Sort in ascending order : \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}