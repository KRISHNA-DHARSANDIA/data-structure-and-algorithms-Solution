#include<iostream>
#include<stdio.h>
// #include<bits/stdc++.h>

using namespace std;

class solution
{
    public:

   int lengthOfLongestSubstring(string s)
    {
        int store[256]={0};
        int right=0;
        int left=0;
        int ans=0;

        while (right<s.size())
        {
            store[s[right]]++;

            while(store[s[right]]>1)
            {
                store[s[left]]--;
                left++;
            }

            ans=max(ans,right-left+1);
            right++;
        }
        
        return ans;
    }

}s1;

int main(){

    string s;

    cout<<" enter string 🧵🧵🧵🧵"<<endl;

    cin>>s;

    s1.lengthOfLongestSubstring(s);

    return 0;
    
}