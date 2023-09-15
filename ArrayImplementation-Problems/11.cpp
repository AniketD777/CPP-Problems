//Searching in 2D array
#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter no. of rows in array: ";
    int row,col;
    cin>>row;
    cout<<"Enter no. of columns in array: ";
    cin>>col;
    cout<<"Enter value for:\n";
    int arr[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"("<<i<<","<<j<<"): ";
            cin>>arr[i][j];
        }
    }
    cout<<"Enter key: ";
    int key;
    cin>>key;
    
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(arr[i][j]==key)
            {
                cout<<"Key Valid!";
                break;
            }
        }
        if(arr[i][j]==key)
        {
            break;
        }
    }
    if(arr[i][j]!=key)
    {
        cout<<"Key Invalid!";
    }

  return 0;
}
