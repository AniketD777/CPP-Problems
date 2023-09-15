//Queue Data Structure(Stack implementation)
//Using two stacks st1 and st2 where st1=>datastore & st2=>helper
//Time complexity => O(1)[If we don't add any new data] && 0(n)[If we add new data]
//(Because we are not pushing back remaining data in st1 and rather keeping it in st2 only)

#include<iostream>
#include<stack>
using namespace std;

class queue
{
    stack<int> st1;
    stack<int> st2;
    public:
    
    void enqueue(int val)
    {
        st1.push(val);
    }
    
    void dequeue()
    {
        if(st1.empty() && st2.empty())
        {
            cout<<"Empty Queue!\n";
            return;
        }
        
        if(!st2.empty())
        {
            st2.pop();
        }
        else if(st2.empty() && !st1.empty())
        {
            while(!st1.empty())
            {
               st2.push(st1.top());
               st1.pop();
            }
            st2.pop();
        }
    }

    int peek()
    {
        if(st1.empty() && st2.empty())
        {
            cout<<"Empty Queue!\n";
            return -1;
        }

        if(st2.empty() && !st1.empty())
        {
            while(!st1.empty())
            {
               st2.push(st1.top());
               st1.pop();
            }
        }
        return st2.top();
    }

    bool empty()
    {
        if(st1.empty() && st2.empty())
        {
            return 1;
        }
        return 0;
    }
};

int main()
{
    queue Q;
    Q.enqueue(1);
    Q.enqueue(2);
    Q.enqueue(3);
    Q.enqueue(4);
    cout<<Q.peek()<<endl;
    Q.dequeue();
    cout<<Q.peek()<<endl;
    Q.enqueue(5);
    while(!Q.empty())
    {
        cout<<Q.peek()<<" ";
        Q.dequeue();
    }
    cout<<Q.peek();
    return 0;
}
