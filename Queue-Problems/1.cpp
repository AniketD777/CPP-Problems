//Queue Data Structure(Using Array implementation)

#include<iostream>
using namespace std;

#define n 100

class queue
{
    int* arr;
    int front;
    int back;
    public:
    queue()
    {
        arr=new int[n];
        front=-1;
        back=-1;
    }

    void enqueue(int val)
    {
        if(back==n-1)
        {
            cout<<"Queue Overflow!";
            return;
        }
        back++;
        arr[back]=val;
        if(front==-1)
        {
            front++;
        }
    }

    void dequeue()
    {
        if(front==-1 || front>back)
        {
            cout<<"Empty Queue!";
            return;
        }
        front++;
    }

    int peek()
    {
        if(front==-1 || front>back)
        {
            cout<<"Empty queue!";
            return -1;
        }
        return arr[front];
    }

    bool empty()
    {
        if(front==-1 || front>back)
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
