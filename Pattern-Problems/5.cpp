//To print pyramid with numbers
#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter size of pyramid: ";
    int size;
    cin>>size;
    for(int i=1;i<=size;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
      cout<<endl;
    } 
    return 0;
}
