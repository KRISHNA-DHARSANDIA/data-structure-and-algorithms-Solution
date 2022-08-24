#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

class Solution
{
public:

 bool is_Anagram(string s, string t)
  {

        int freqs[26]={0},freqt[26]={0};

        for(char ch:s) freqs[ch-'a']++;
        for(char ch:t) freqt[ch-'a']++;

        for(int i=0;i<26;i++)
        {
            if(freqs[i]!=freqt[i])
            {
                cout<<"false";
                return false;
            }
        }
        cout<<"true";
        return true;
  }

}s1;


int main()
{
    string s,t;

    cout<<"enter youer string"<<endl;
    cin>>s;

    cout<<"enter another string"<<endl;
    cin>>t;

    s1.is_Anagram(s,t);

}