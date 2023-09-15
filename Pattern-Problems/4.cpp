//To print 180 degrees rotated pyramid
#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter size of Pyramid: ";
    int size;
    cin>>size;
    for(int i=size;i>=1;i--)
    {
        for(int j=1;j<=size;j++)
        {
            if(j>=i)
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
