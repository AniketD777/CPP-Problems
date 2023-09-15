//To print a rhombus
#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter size of rhombus: ";
    int size;
    cin>>size;
    for(int i=size;i>=1;i--)
    {
        for(int j=1;j<=i-1;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=size;k++)
            {
                cout<<"* ";
            }
        cout<<endl;
    }
    return 0;
}
