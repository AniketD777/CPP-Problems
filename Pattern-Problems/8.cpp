//To print a Butterfly pattern (Complete)
#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter size (only for the upper half): ";
    int size;
    cin>>size;
    for(int i=1;i<=size;i++)  //For Upperhalf
    {
        for(int j=1;j<=size*2;j++)
        {
            if((j<=i) || (j>(size*2)-i))
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    for(int i=size;i>=1;i--)                      //For Lowerhalf
    {
        for(int j=1;j<=size*2;j++)
        {
            if((j<=i) || (j>(size*2)-i))
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}
