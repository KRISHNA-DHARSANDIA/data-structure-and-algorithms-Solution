#include<iostream>
#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;

int finddifference(int arr[],int n,int m)
{
    sort(arr,arr+n);
    
    if(m==0||n==0)
    return 0;
    
    int min_diff=INT_MAX;
    
    for(int i=0;i<n;i++)
    {
        int diff=arr[i+m-1]-arr[i];
        {
            if(diff<min_diff)
            min_diff=diff;
        }
    }
    
    cout<<min_diff;
    
}

int main()
{
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];    
    }
    
    int m;
    cin >>m;
    
    finddifference(arr,n,m);
    
}