#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cout << "array size" << endl;
    cin >> n;
    int arr[n];
    int ans;

cout<<"Enter array elements"<<endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int left = i;
        int right = i;

        while (arr[left]>=arr[i])
        {
            left--; 
        }
        while (arr[right]>=arr[i])
        {
            right++;
        }

        ans = (right - left - 1) * arr[i];
    }

cout<<ans;
}