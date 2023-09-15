//To print a triangle with numbers
#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter size of Triangle: ";
    int size;
    cin>>size;
    for(int i=1;i<=size;i++)
    {
        for(int j=1;j<=size-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }

    return 0;
}
