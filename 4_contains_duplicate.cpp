#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n;

    cin >> n;

    int i,nums[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(nums[i]==nums[j])
            {
                cout<<"true";
                return 0;
            }
        }
    }
    cout<<"false";


}