#include<iostream>
#include<map>
using namespace std;

class
{
    public:

   void duplication_string(string s)
    {
      map<char,int>count;            //expalme <k,1> <r,1>

        for(int i=0;i<s.length();i++)
        {
            count[s[i]]++;  
        }

        for(auto it : count)
        {
            if(it.second>1)                
            {
                cout<<it.first<<" string "<<it.second<<endl;
            }
        }
    }
}s1;

int main()
{
    string s;

    cout<<"enter string .................";
    cin>>s;

    s1.duplication_string(s);
}