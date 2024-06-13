#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
     
        int freqt[26]={0};
        int freqs[26]={0};
        
     for(char ch:s) freqs[ch-'a']++;
     for(char ch:t) freqt[ch-'a']++;
        
        // int n=max(s.size(),t.size());
        
        for(int i=0;i<26;i++)
        {
            if(freqs[i]!=freqt[i])
            {
                return false;
            }
        }
        
        return true;
    }
};


int main()
{
    Solution s1;

    string s,t;

    cout<<"enter string ................."<<endl;
    cin>>s;
    cin>>t;

    s1.isAnagram(s,t);

    return 0;

}