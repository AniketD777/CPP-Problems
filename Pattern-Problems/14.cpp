//To print a kite pattern
#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter size of pattern: ";
    int size;
    cin>>size;
    for(int i=1;i<=size;i++) //For midline stars + the above stars
    {
        for(int j=1;j<=size-i;j++)
        {
            cout<<"  ";
        }
        for(int k=1;k<=i;k++)  //For stars(*) at left from centre
        {
            cout<<"* ";
        } 
        for(int l=1;l<=i-1;l++)  //For stars at right from centre
        {
            cout<<"* ";
        }
        
        cout<<endl;
    }
    for(int i=size-1;i>=1;i--)  //For stars at bottom from the mid line
    {
        for(int j=1;j<=size-i;j++)
        {
            cout<<"  ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<"* ";
        }
        for(int l=1;l<=i-1;l++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
