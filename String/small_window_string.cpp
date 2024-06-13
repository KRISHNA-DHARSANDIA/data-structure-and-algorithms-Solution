#include<bits/stdc++.h>
using namespace std;

class A
{
    public:

    void solve(string s1,string s2)
    {
        
         string ans="";

        map<char,int>map2;

        for(int i=0;i<s2.size();i++)
        {
            char ch=s2.at(i);
            map2.put(ch,map.getOrDefault(ch,0)+1)
        }
        
        int mct=0;
        int dmct=s2.size();
        map<char,int>map1;
        int i=-1;
        int j=-1;
        
        while(true)
        {
            bool flag1=false;
            bool flag2=false;
            
            
            while(i<s1.size() -1 && mcp<dmct)
            {
                i++;
                char ch=s1.at(i);
                map1.put(ch,map1.getOrDefault(ch,0)+1);
                
                if(map1.getOrDefault(ch,0)<=map2.getOrDefault(ch,0))
                {
                    mct++;
                    
                }
                
                f1=true;
            }
            
            while(j<i && mct == dmct)
            {
                string pans=s1.substring(j+1,i+1);
                if(pans.size()==0 || pans.size()<ans.size())
                {
                    ans=pans;
                }
                
                j++;
                
                char ch=s1.at(j);
                
                if(map.get(ch)==1)
                {
                    map1.remove(ch);
                }else
                {
                    map1.put(ch,map1.get(ch)-1);
                }
                
                if(map1.getOrDefault(ch,0)<map2.getOrDefault(ch,0))
                {
                    act--;
                }
                
                f2=true;
            }
            
            if(f1==false && f2==false)
            {
                break;
            }
            
        }
        
        return ans;
    }

}obj;

int main()
{
    char s1[]="timetopractice";

    char s2[]="toc";

    obj.solve(s1,s2);
}