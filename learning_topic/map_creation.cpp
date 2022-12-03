
#include "bits/stdc++.h"
using namespace std;

class A
{
    public:

   int solve(int a[],int n)
   {
        map<int,int>m;

        for(int i=0;i<n;i++)
        {
            if(m.find(a[i]) == m.end())
            {
                m[a[i]]=1;
            }
            else
            {
                m[a[i]]++;
            }
        }
        
       for (auto it : m) {
        cout << it.first << ' '<< it.second << '\n';
    }
   }

}obj;

int main()
{
    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    obj.solve(a,n);
}