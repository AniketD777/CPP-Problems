//Decreasing order
#include<iostream>
using namespace std;

void decre(int n)
{
    if(n<0)
    {
        return;
    }
    cout<<n<<" ";
    decre(n-1);
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    decre(n);
}
