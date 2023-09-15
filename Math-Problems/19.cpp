//HCF using euclid's algorithm
#include<iostream>
using namespace std;

void HCF(int a, int b)
{
    int temp=0;
    while(a%b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    cout<<b;
}

int main()
{
    int a,b;
    cout<<"Input a: ";
    cin>>a;
    cout<<"Input b: ";
    cin>>b;
    HCF(a,b);

    return 0;
}
