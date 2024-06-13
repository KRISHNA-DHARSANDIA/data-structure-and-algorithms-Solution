#include <iostream>
#include <conio.h>

using namespace std;

int adjacent_differ(int arr[], int n, int k, int x)
{
    int i = 0;

    while (i < n)
    {
        i = i + max(i, abs(arr[i] - x) / k);

        if (arr[i] == x)
        {
            return i;
        }
    }
}

int main()
{
    int n, k, x;

    cout << "Enter The number of elements of array : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the maximux Difference value : ";
    cin >> k;

    cout << "Enter The Number of XTh finding value : ";
    cin >> x;

    cout<<adjacent_differ(arr, n, k, x);
}