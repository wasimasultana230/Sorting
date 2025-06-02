#include <iostream>
#include <algorithm>
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
    // selection sort in descending order
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(arr[i], arr[min]);
        }
    }
    cout << "Sort the array in descending order : \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}