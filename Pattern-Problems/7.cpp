//To Print upper-half Butterfly pattern
#include<iostream>
using namespace std;

int main()
{
    cout<<"Size: ";
    int size;
    cin>>size;
    for(int i=1;i<=size;i++)
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
