#include <iostream>
#include <conio.h>

using namespace std;

//    /*brute force approach*/

// int celling(int arr[],int n,int x)
// {
//     int ceil,floor;

//     //base condition

//     if(x==0)
//     {
//         cout<<"floor doesn't exist in array"<<endl;
//         cout<<"ceil:"<<arr[0]<<endl;
//     }

//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]>x)
//         {
//             floor = arr[i-1];
//             ceil = arr[i];
//             break;
//         }
//     }

//     cout<<"floor : "<<floor<<endl<<"ceil : "<<ceil;
// }




int main()
{

    int n, x;

    cout << "Enter the n size of array : ";
    cin >> n;

    int arr[n];

    cout << "Enter the array elements :" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the finding value : ";
    cin >> x;

 
}