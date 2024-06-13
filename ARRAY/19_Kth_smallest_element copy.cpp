#include<iostream>
#include<stdio.h>
#include <bits/stdc++.h>

using namespace std;

class solution 
{
    public:
                                       //2, 7, 6, 1, 4, 5
    void kths(int arr[],int n,int k)
    {
      int ans=0;
      int sum=0;

      unordered_map<int,int>m;      //heap declare

      m.insert({0,-1});

        for(int i=0;i<n;i++)
        {
            sum+=arr[i];         // sum of array

            int rem=sum%k;

            if(m.find(rem)==m.end())        // not seen before in ma
            {
                m.insert({rem,i});
            }

            else          // seen reminder in map
            {
                    ans=max(ans,i-m[rem]);
            }
        }
            cout<<ans;
    }
    
}s1;

int main()
{

   int n,arr[10],k,i;
    
    cout<<"enter number of elements"<<endl;
    
    cin>>n;
    
    cout<<"enter elements"<<endl;
    
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"enter kth devision elements"<<endl;
    
    cin>>k;
    
    int l=0;
    int r=n-1;
    
    s1.kths(arr,n,k);
    
}