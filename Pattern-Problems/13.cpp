//To print palindromic pattern 
#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter size of traingle: ";
    int size;
    cin>>size;
    for(int i=1;i<=size;i++)
    {
        for(int j=1;j<=size-i;j++)
        {
            cout<<"  ";
        }
        for(int k=i;k>=1;k--)
        {
            cout<<k<<" ";
        }
        for(int l=2;l<=i;l++)
        {
            cout<<l<<" ";
        }
      cout<<endl;
    }
    return 0;
}
