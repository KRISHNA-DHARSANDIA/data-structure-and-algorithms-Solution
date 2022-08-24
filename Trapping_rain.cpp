#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<stdio.h>
using namespace std;

int raintapping(int *arr,int n)
{
        int *left=arr; 
        int *right=arr; //for trasafaring array

       left[0]=arr[0];

       for(int i=1;i<n;i++)
       {
            left[i]=max(left[i-1],arr[i]);
       }

        for(int i=0;i<n;i++)
        {
            cout<<left[i];
        }

       right[n-1]=arr[n-1];

        for(int i=n-1;i>=0;i--)
        {
            right[i]=max(right[i+1],arr[i]);
        }

        for(int i=0;i<n;i++)
        {
            cout<<right[i];
        }

        int ans=2;

        for(int i=0;i<n;i++)
        {
            ans+=(min(right[i],left[i])-arr[i]);
        }

   return ans;

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

    raintapping(arr,n);
}