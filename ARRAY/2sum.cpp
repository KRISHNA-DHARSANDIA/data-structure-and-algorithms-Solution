#include<iostream>
#include<stdio.h>
#include<vector>
#include<stdlib.h>

using namespace std;


class solution
{

    public:

    vector<int> twosum(vector<int> & nums,int target)
    {
            vector<int>ans;
            
            unordered_map<int,int> mpp;

            for(int i=0;i<nums.size();i++)
            {
                if(mpp.find(target-nums[i])!=mpp.end())
                {
                    ans.push_back(mpp[target-nums[i]]);
                    ans.push_back(i);
                    return ans;
                }
                 mpp[nums[i]]=i;
            }
           return ans;
    }

        
}s1;


int main()
{
    int n;

    cout<<"enter nummber of elements"<<endl;

    cin>>n;

    int arr[n];

    cout<<"enter elements";

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int target;

    cout<<"enter sum of number"<<endl;
    cin>>target;

    s1.twosum(arr,target);
    
}