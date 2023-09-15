//To reverse the stack
#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &st,int temp)
{
    if(st.empty())
    {
        st.push(temp);
        return;
    }
    int topEle=st.top();
    st.pop();
    insertAtBottom(st,temp);
    st.push(topEle);
}

void revStack(stack<int> &st)
{
    if(st.empty())
    {
       return;
    }
    int temp=st.top();
    st.pop();
    revStack(st);
    insertAtBottom(st,temp);
} 

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    revStack(st);
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}
