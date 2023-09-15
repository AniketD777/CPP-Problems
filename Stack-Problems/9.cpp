//To check redundant parenthesis
#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool redunParen(string s)
{
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(' || s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/')
        {
            st.push(s[i]);
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            continue;
        }
        else  //ie. if closing bracket ')'
        {
            if(st.top()=='(' )
            {
                return 1;
            }
            while(st.top()!='(')
            {
                st.pop();
            }
            st.pop();
        }
    }
    return 0;
}

int main()
{
    string s="(a+(b/c))";
    cout<<redunParen(s);
    return 0;
}
