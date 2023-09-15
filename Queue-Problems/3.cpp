//Queue Data Structure(Stack implementation)
//Using two stacks st1 and st2 where st1=>datastore & st2=>helper
//Time complexity => O(n)(Always) (Because we are pushing back remaining data in st1)
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
        if(st1.empty())
        {
            cout<<"Empty Queue!"; 
            return;
        }
        if(!st1.empty())
        {
            while(!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
            st2.pop();
            
           while(!st2.empty())
           {
               st1.push(st2.top());
               st2.pop();
           }
        }
    }

    int peek()
    {
        int topVal;
        if(st1.empty())
        {
            cout<<"Empty Queue!"; 
            return -1;
        }
        if(!st1.empty())
        {
            while(!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
            topVal=st2.top();
            
            while(!st2.empty())
            {
                st1.push(st2.top());
                st2.pop();
            }
        }
        return topVal;
    }

    bool empty()
    {
        if(st1.empty())
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
    while(!Q.empty())
    {
        cout<<Q.peek()<<endl;
        Q.dequeue();
    }
    cout<<Q.empty();
    return 0;
}
