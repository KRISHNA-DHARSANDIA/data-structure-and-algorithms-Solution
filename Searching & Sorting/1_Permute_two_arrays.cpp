#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int permute(int a[],int b[],int k,int n)
{

    sort(a,a+n);
    sort(b,b+n,greater<int>());

    for(int i=0;i<n;i++)
    {
        if(a[i]+b[i]!=k)
       return false;
    }

   return true;
}

int main()
{
    int n,k;

    cin>>n;

    int a[n],b[n];

    cout<<"Enter first Array"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Enter Second Arrar"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }

    cout<<"Enter K Value"<<endl;
    cin>>k;

    permute(a,b,k,n)?cout<<"True" : cout<<"false";
}
    
  