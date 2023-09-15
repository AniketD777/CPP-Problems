//Infix to Postfix

#include<iostream>
#include<stack>
using namespace std;

int precedence(char c)
{
    if(c=='^')
    {
        return 3;
    }
    else if(c=='/' || c=='*')
    {
        return 2;
    }
    else if(c=='+' || c=='-')
    {
        return 1;
    }
    return -1;
}

string infixToPostfix(string s)
{
    string res;
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
       if(s[i]=='(')
       {
           st.push(s[i]);
       }
       else if(s[i]>='a' && s[i]<='z')
       {
           res+=s[i];
       }
       else if(s[i]==')')
       {
           while(!st.empty() && st.top()!='(') //Incase no brackets in given string
           {                                   //empty declared first because if empty
               res+=st.top();                  //we won't be able to access the top then
               st.pop();
           }
           if(!st.empty())
           {
               st.pop(); //To remove '(' from stack
           }
       }
       else //ie. if operator
       {
           while(!st.empty() && precedence(st.top())>precedence(s[i]))
           {
               res+=st.top();
               st.pop();
           }
           st.push(s[i]);
       }
    }
   
    while(!st.empty())
    {
        res+=st.top();
        st.pop();
    }
    return res;
}

int main()
{
    string s="(a-b/c)*(a/k-l)";
    cout<<infixToPostfix(s);
    return 0;
}
