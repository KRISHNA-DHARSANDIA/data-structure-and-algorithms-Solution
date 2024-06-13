#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int low_price=0,max_profit=0;
        
        for(int i=0;i<prices.size();i++)
        {
            low_price=min(low_price,prices[i]);
            
            int profit =prices[i]-low_price;
            
            max_profit=max(max_profit,profit);
        }
        
        return max_profit;
        
    }
};

int main()
{
    Solution s1;

    int n;

    cin>>n;

    vector<int>prices(n);

    for(int i=0;i<n;i++)
    {
        cin>>prices[i];
    }

    s1.maxProfit(prices);

}