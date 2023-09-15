//Queue Data Structure(Stack implementation)
//Using a single stack only (ie. by recursively reaching the end and then poping that end ele)
#include<iostream>
#include<stack>
using namespace std;

class queue
{
    stack<int> st;
    public:

    void enqueue(int val)
    {
        st.push(val);
    }

    void dequeue()
    {
        if(st.empty())
        {
            cout<<"Empty Queue!";
            return;
        }
        if(st.size()==1)//Agar ek element bacha toh use pop() kar do
        {
            st.pop();
            return;
        }
        int x=st.top();
        st.pop();
        dequeue();
        st.push(x);//return karte time wapas usi order me stack replace karo except 
                    //the end popped element
    }

    int peek()
    {
        if(st.empty())
        {
            cout<<"Empty Queue!";
            return -1;
        }
        if(st.size()==1) //Agar ek element bacha toh use return kar do
        {
            return st.top(); 
        }
        int x=st.top();
        st.pop();
        int item=peek();
        st.push(x); //return karte time wapas usi order me stack replace karo except 
                    //the end element
        return item;
    } 

    bool empty()
    {
        if(st.empty())
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
    Q.dequeue();
    Q.enqueue(3);
    Q.enqueue(4);
    while(!Q.empty())
    {
        cout<<Q.peek()<<" ";
        Q.dequeue();
    }
    cout<<Q.peek();
    return 0;
}
