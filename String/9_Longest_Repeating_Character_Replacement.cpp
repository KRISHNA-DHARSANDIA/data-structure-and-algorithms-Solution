
#include<bits/stdc++.h>

using namespace std;


class solution
{
    public:

    int lengthOfLongestSubstring(string s,int k)
    {
        int maxi=0,ans=0,left=0,right=0;

        int n=s.size();

        unordered_map<char,int>mp;

        while (right<n)
        {
            mp[s[right]]++;

            maxi=max(maxi,mp[s[right]]);

            if((right-left+1)-maxi < k)
            {
                mp[s[left]]--;
                left++;
            }

            ans=max(ans,(right-left+1));
            right++;

        }
     return ans;   
    }
}s1;

int main(){

    string s;
    int k;

    cout<<" enter string 🧵🧵🧵🧵"<<endl;

    cin>>s;

    cout<<"how much time character change"<<endl;
    cin>>k;

    int ans=s1.lengthOfLongestSubstring(s,k);
    

}