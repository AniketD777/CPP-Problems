//Stack Data Structure(Using Queue Implementation)
//Method 2 (making pop() and top() operation costly)

#include<iostream>
#include<queue>
using namespace std;

class stack
{
    int N=0;
    queue<int> q1;
    queue<int> q2;
    public:
    void push(int val)
    {
        q1.push(val);
        N++;
    }
    void pop()
    {
        if(q1.empty())
        {
            cout<<"Empty Stack!";
            return;
        }
        while(q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        N--;
        
        queue<int> tempQ=q2; //To interchange queues q1 and q2
        q2=q1;
        q1=tempQ;
    }

    int top()
    {
        if(q1.empty())
        {
            cout<<"Empty stack!";
            return -1;
        }
        while(q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        
        int top=q1.front();
        q2.push(q1.front());
        q1.pop();


        queue<int> tempQ=q2;//To interchange queues q1 and q2
        q2=q1;
        q1=tempQ;
        return top;
    }

    bool empty()
    {
        if(q1.empty())
        {
            return 1;
        }
        return 0;
    }

    int size()
    {
        return N;
    }

};

int main()
{
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;  
    return 0;
}
