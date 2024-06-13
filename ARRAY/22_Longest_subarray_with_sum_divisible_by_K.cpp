#include<istream>
#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:  //2, 7, 6, 1, 4, 5}

    void kthd(int arr[],int n,int k)
    {
        unordered_map<int,int>um;

        int curr_sum=0;
        int ans=0;

        um.insert({0,-1});  // rem=0 and and fist i=-1

        for(int i=0;i<n;i++)
        {
            curr_sum+=arr[i];

           int rem=curr_sum%k;

           if(rem<0)rem+=k;

            if(um.find(rem)==um.end()) // not insert in map
                um.insert({rem,i});
            
            else                      //in map found and find length
            ans=max(ans,i-um[rem]);
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
    
    cout<<"enter kth smallest elements"<<endl;
    
    cin>>k;
    
    int l=0;
    int r=n-1;
    
    s1.kthd(arr,n,k);
    
}