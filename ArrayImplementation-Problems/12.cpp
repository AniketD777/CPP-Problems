//Print Spiral 2-D array
#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter no. of rows: ";
    int m,n;
    cin>>m;
    cout<<"Enter no. of columns: ";
    cin>>n;
    cout<<"Enter array in 2-D form at once:\n";
    int arr[m][n]={0};
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int row_start=0,row_end=m-1,col_start=0,col_end=n-1;
    while(row_start<=row_end && col_start<=col_end)
    {
        //For row_start
        for(int col=col_start;col<=col_end;col++)
        {
            cout<<arr[row_start][col]<<" ";
        }
        row_start++;
        
        //For col_end;
        for(int row=row_start;row<=row_end;row++)
        {
            cout<<arr[row][col_end]<<" ";
        }
        col_end--;

        //For row_end;
        for(int col=col_end;col>=col_start;col--)
        {
            cout<<arr[row_end][col]<<" ";
        }
        row_end--;

        //For col_start;
        for(int row=row_end;row>=row_start;row--)
        {
            cout<<arr[row][col_start]<<" ";
        }
        col_start++;
    }
    
    return 0;
}
