#include<stdio.h>
#include<iostream>
using namespace std;

int roatation(int *arr,int n)
{
    int k;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1]+1)
        {
            k++;
        }
    }

    cout<<k;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    roatation(arr,n);

}