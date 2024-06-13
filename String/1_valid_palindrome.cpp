#include<iostream>
#include<stdio.h>
using namespace std;

class Solution {
public:
        bool isPalindrome(string s) {
        string temp="";
        for(int i=0;i<s.length();i++) 
            if((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122)||(s[i]>=48&&s[i]<=57)) temp+=tolower(s[i]);
        for(int i=0;i<temp.length()/2;i++) if(temp[i]!=temp[temp.length()-i-1]) return false;
               cout<<"true";
    }
};


int main()
{
    Solution s1;

    string s;

    cout<<"enter string .................";
    cin>>s;

    s1.isPalindrome(s);

    return 0;

}