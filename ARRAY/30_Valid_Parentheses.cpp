#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<stack>
using namespace std;

class solution
{

public:
    
    bool isValid(string s)
    {
        stack<char>stk;

        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='{' || s[i]=='[' || s[i]=='(')
            {
                stk.pop(s[i]);
            }

            else if(s[i]=='}')
            {
                if(!stk.empty()  && stk.top() == '{')
                {
                    stk.pop();
                }

                else{
                    stk.pop(s[i]);
                }
            }

            
            else if(s[i]=='[')
            {
                if(!stk.empty()  && stk.top() == '[')
                {
                    stk.pop();
                }

                else{
                    stk.pop(s[i]);
                }
            }

            
            else if(s[i]==')')
            {
                if(!stk.empty()  && stk.top() == '(')
                {
                    stk.pop();
                }

                else{
                    stk.pop(s[i]);
                }
            }
        }

    }

};

