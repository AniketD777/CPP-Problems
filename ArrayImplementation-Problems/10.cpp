// 2D-Array
#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter no. of rows: ";
    int row,col;
    cin>>row;
    cout<<"Enter no. of columns: ";
    cin>>col;
    int arr[row][col];
    cout<<"Enter Value for "<<"\n";
    for(int i=0;i<=row-1;i++)   //For input
    {
        for(int j=0;j<=col-1;j++)
        {
            cout<<"("<<i<<","<<j<<"): ";
            cin>>arr[i][j];
        }
    }
    cout<<"\n";
    cout<<"The 2D array is:\n";
    for(int i=0;i<=row-1;i++)
    {
        for(int j=0;j<=col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
       cout<<"\n";
    }
  return 0;
}
