#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void Count_triplets(int *arr, int n, int sum)
{
    sort(arr, arr + n);

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] < sum)
                {
                    cout << arr[i] << "\t" << arr[j] << "\t" << arr[k] << endl;
                }
            }
        }
    }
}

int main()
{
    int n, sum;

    cout << "Enetr The number OF elements :" << endl;
    cin >> n;

    int arr[n];

    cout << "Enter the elemenst :" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the sum:" << endl;
    cin >> sum;

    Count_triplets(arr, n, sum);
}