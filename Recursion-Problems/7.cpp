//Increasing order
#include<iostream>
using namespace std;

void incre(int n)
{
    if(n<0)
    {
        return;
    }
    incre(n-1);
    cout<<n<<" ";
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    incre(n);
}
