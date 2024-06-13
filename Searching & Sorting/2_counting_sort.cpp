#include "iostream"
#include "cstring"

using namespace std;

void cout_sort(int arr[], int n, int k)
{
    int b[n];

    int count[k + 1];
    memset(count, 0, sizeof(count));

    for (int i = 0; i < n; i++)
    {
        ++count[arr[i]];
    }

    cout << "\n";

    for (int i = 0; i < n; i++)
    {
        cout << count[i] << "\t";
    }

    cout << "\n";

    for (int i = 1; i <= k; i++)
    {
        count[i] = count[i] + count[i - 1];
    }

    cout << "After the Updating Count value" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << count[i] << "\t";
    }

    for (int i = n - 1; i >= 0; i--)
    {
        b[--count[arr[i]]] = arr[i];
    }
    cout << endl;
    cout << "Sorting Array is....." << endl;

    for (int i = 0; i < n; i++)
    {
        cout << b[i] << "\t";
    }
}

int main()
{
    int n;

    cout << "Enter the Array size" << endl;
    cin >> n;

    int arr[n];

    cout << "Entern the array Value" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout_sort(arr, n, 9);
}