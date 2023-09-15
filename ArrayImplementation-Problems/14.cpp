//Multiplication of two matrices
#include<iostream>
using namespace std;

int main()
{
    cout<<"Matrix 1:\n";
    cout<<"Enter no. of rows: ";
    int row1,col1;
    cin>>row1;
    cout<<"Enter no. of columns: ";
    cin>>col1;
    cout<<"Enter values in matrix in order:\n";
    int arr1[row1][col1];
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            cin>>arr1[i][j];
        }
    }

    cout<<"Matrix 2:\n";
    cout<<"Enter no. of rows: ";
    int row2,col2;
    cin>>row2;
    cout<<"Enter no. of columns: ";
    cin>>col2;
    cout<<"Enter values in matrix in order:\n";
    int arr2[row2][col2];
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;j++)
        {
            cin>>arr2[i][j];
        }
    }
    cout<<endl;
    /*int row,col;
    row=row1;
    col=col2;
    */
    int arr[row1][col2];
    
    if(col1==row2)
    {
        for(int i=0;i<row1;i++)
        {
            for(int j=0;j<col2;j++)
            {
                for(int k=0;k<col1;k++)  //or k<row2
                {
                    arr[i][j]+=arr1[i][k]*arr2[k][j];
                }
            }
        }  
        cout<<"Product of matrices is:\n";
        for(int i=0;i<row1;i++)
        {
            for(int j=0;j<col2;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        } 
    }
    else
    {
        cout<<"Multiplication not possible! Check if column of 1 = row of 2"<<endl;
    }

  return 0;
}
