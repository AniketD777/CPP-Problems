//Find no. of ways in a matrix
#include<iostream>
using namespace std;

int count(int row,int col,int i,int j)
{
    if(i==col-1 && j==row-1)
    {
        return 1;//ie. reached the destination 
    }
    if(i>=col || j>=row)
    {
        return 0;
    }
    return count(row,col,i+1,j)+count(row,col,i,j+1);
}

int main()
{
    int row,col;
    cout<<"Enter no. of rows: ";
    cin>>row;
    cout<<"Enter no. of cols: ";
    cin>>col;
    cout<<"No. of ways are => "<<count(row,col,0,0);
    return 0;
}
