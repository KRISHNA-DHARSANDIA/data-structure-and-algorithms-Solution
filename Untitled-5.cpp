#include<iostream>
#include<stdio.h>
using namespace std;

class solution
{
  public:

    void sum2(int nums[],int target,int n)
    {
    int ans;
    
    int unordered_map[20];
    int mpp[10];

    for(int i=0;i<n;i++)
    {
      if(mpp.find(target-nums[i]) != n)
      {
        ans.push_back(mpp[target-nums[i]]);
        ans.push_back(i);
        cout<<ans;
      }
      mpp[nums[i]]= i;
    }
   cout<<ans;
  }
}s1;


int main()
{
    int n;

    cout<<"enter number of elements"<<endl;
    cin>>n;

    int arr[n];

    cout<<"enter array elements"<<endl;

    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }

    int  target;

    cout<<"enter sum2 of number"<<endl;
    cin>>target;

    s1.sum2(arr,target,n);
}