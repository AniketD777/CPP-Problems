//Floyd's Triangle
#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter size of triangle: ";
    int size;
    cin>>size;
    int incre=1;
    for(int i=1;i<=size;i++)
    {
        for(int j=1;j<=i;j++)
        { 
           cout<<incre<<" ";
           incre++;
        }
        cout<<endl;
    }
    return 0;
}
