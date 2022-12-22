#include <iostream>
#include <bits/Stdc++.h>
using namespace std;

// brute force approach

// void Majority_Element(int n, int arr[])
// {
//     int ans, count, maxcount, index;

//     for (int i = 0; i < n; i++)
//     {
//         count = 0;

//         for (int i = 0; i < n; i++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 count++;
//             }
//         }

//         if (maxcount < count)
//         {
//             maxcount = count;
//             index = i;
//         }
//     }

//     if(maxcount<n/2)
//     {
//          cout<<"Majority elements is :"<<arr[index];
//     }
//     else
//     {
//         cout<<"No Majority Element"<<endl;
//     }
// }

int Majority_Element(int n, int *arr)
{
    int count = 1;

    sort(arr, arr + n);

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            count++;
        }

        else
        {
            if (count > n / 2)
            {
                return arr[i - 1];
            }
            count = 1;
        }
    }
    return -1;
}

int main()
{       
    int n;

    cout << "Enetr The number OF elements :" << endl;
    cin >> n;

    int arr[n];

    cout << "Enter the elemenst :" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Majority Elements is:"<< Majority_Element(n, arr);
   
}