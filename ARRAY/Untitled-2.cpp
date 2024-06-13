#include<iostram>
#include<vector>

using namsespaces std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int maxproduct=1;    
        int currentproduct=1;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<=0)
            {
                currentproduct=1;
            }
            
            currentproduct*=nums[i];
            
            maxproduct=max(currentproduct,maxproduct);
           
            if(maxproduct==0)
            {
                maxproduct=0;
            }
        }
        
        return maxproduct;
    }
};

int main()
{
    Solution s1;

    vectore<int>nums;

    int n;

    for(int i=0;i<n;i++)
    {
        nums.push_back(i);
    }

    s1.maxProduct(nums);
}