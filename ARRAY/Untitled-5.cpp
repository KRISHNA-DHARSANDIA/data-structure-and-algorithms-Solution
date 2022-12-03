#include<iostream.h>
#include<stdio.h>

using namespace std;

class
{
    public:

    int llengthOfLongestSubstring(string s)
    {
        for(int i=0;i<s.size();i++)
        {
            for(int j=i+1;j<s.size();j++)
            {
                for(int k=j+1;k<s.size();i++)
                {
                    if(s[i]==s[k] && s[j]!=s[i])
                    {
                        cout<<s[i]+s[j]+s[k];
                    }
                }
            }
        }
    }
}


int main(){

    string s;
    int k;

    cout<<" enter string 🧵🧵🧵🧵"<<endl;

    cin>>s;

    int ans=s1.lengthOfLongestSubstring(s);
}