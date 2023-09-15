//Check balanced parenthesis or not
// ({[]}) => balanced
// ({[}]) => unbalanced

#include<iostream>
#include<stack>
using namespace std;

bool checkBalanceParen(string s)
{
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(' || s[i]=='[' || s[i]=='{')
        {
            st.push(s[i]);
        }
        else if(s[i]==')')
        {
            if(!st.empty() && st.top()=='(')
            {
                st.pop();
            }
            else
            {
               return 0;
            }
        }
        else if(s[i]==']')
        {
            if(!st.empty() && st.top()=='[')
            {
                st.pop();
            }
            else
            {
               return 0;
            }
        }
        else if(s[i]=='}')
        {
            if(!st.empty() && st.top()=='{')
            {
               st.pop();
            }
            else
            {
               return 0;
            }
        }   
    }
    return 1;
}

int main()
{
    string s="[{}]"; 
    cout<<checkBalanceParen(s);
    return 0;
} 
