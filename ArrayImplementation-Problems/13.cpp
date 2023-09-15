//Transpose of a square matrix
#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter No. of row/col:\n*Note-Is a square matrix ie. NxN\n";
    int size;
    cin>>size;
    int row=size;
    int col=size;
    int arr[row][col];
    cout<<"Enter the values in matrix in order:\n";
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            cin>>arr[row][col];
        }
    }
    cout<<"Transpose is:\n";                          //   Logic:
    for(int i=0;i<size;i++)              //  1,1  1,2  1,2      
    {                                    //  2,1  2,2  2,3
        for(int j=0;j<size;j++)          //  3,1  3,2  3,3     
        {                                //       ||
            cout<<arr[j][i]<<" ";        //       \/
        }                                //  1,1  2,1  3,1
        cout<<endl;                      //  1,2  2,2  3,2
    }                                    //  1,3  2,3  3,3
    return 0;
}
