#include<iostream>
#include<conio.h>
#include <bits/stdc++.h>

using namespace std;

void find_pair(int arr[],int n,int p1,int p2)
{
    sort(arr, arr + n);

    
}

int main()
{
    int n,p1,p2,num;

    cout << "Enter The number of elements of array : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout<<"Enter the Fister pair number : "<<endl;
    cin>>p1;

    cout<<"Enter The Second pair number : "<<endl;
    cin>>p2;

    cout<<"Enter the difference number : "<<endl;
    cin>>n;

    find_pair(arr,n,p1,p2);

}