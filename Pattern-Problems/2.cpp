//To print hollow rectangle
#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter rows: ";
    int row,column;
    cin>>row;
    cout<<"Enter columns: ";
    cin>>column;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            if(i==0 || i==row-1 || j==0 || j==column-1)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  "; //Note here there are two double spaces as we gave a space
            }               //to the star above so we did to alignment against that.
            
        }
        cout<<endl;
    }
    return 0;
}
