//Stack DataStructure
#include<iostream>
using namespace std;

#define n 100 //For dynamic allocation of size(*Note->No semicolon used)
              //A stack of maximum elements 100
class stack
{
    int* arr;
    int top;
    public:
    stack()
    {
        arr=new int[n];
        top=-1;
    }
    void push(int x)//To insert an element at top of stack
    {
        if(top==(n-1))//Stack overflow condition
        {
            cout<<"Stack Overflow!\n";
            return;
        }
        top++;
        arr[top]=x;
    }
    
    void pop() //To remove top element from stack
    {
        if(top==-1)
        {
            cout<<"Empty Stack!\n;";
            return;
        }
        top--;
    }

    int Top() //To show topmost stack element
    {
        if(top==-1)
        {
            cout<<"Empty Stack!\n";
            return -1;
        }
        return arr[top];
    }

    bool empty()
    {
        return (top==-1);//If empty cout '1' if not then '0'
    }

};

int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    cout<<st.empty()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;
    return 0;
}
