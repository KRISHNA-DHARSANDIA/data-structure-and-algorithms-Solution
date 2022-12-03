#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        int n = nums.size();
    
        unordered_set<int> has;
        
        for(int i=0;i<n;i++)
        {
          if(has.count(nums[i]))
          {
              return true;
          }
          else
          {
                has.insert(nums[i]);
          }
            
        }
        return false;
    }
};
     
int main()
{
    Solution s1;

    int n;

    cout<<"enter vector size"<<endl;
    cin >> n;

    vector<int>nums;
    
    cout<<"Enter value"<<endl;

    for(int i=0;i<n-1;i++)
    {
        nums.push_back(i);
    }

    s1.containsDuplicate(nums);
}
