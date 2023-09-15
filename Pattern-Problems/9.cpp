//To print triangle with 0 and 1(Alternate Pattern)
#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter size of triangle: ";
    int size;
    cin>>size;
    bool TF=1;
    for(int i=1;i<=size;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<TF;
            TF=!TF;
        }
        cout<<endl;
    }
    return 0;
}
