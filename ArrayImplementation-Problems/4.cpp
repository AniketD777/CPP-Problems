//Sorting using selection method 
#include<iostream>
using namespace std;

int main()
{
    cout<<"To sort arrays in increasing order:\n";
    cout<<"Enter the size of array: ";
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter value for position "<<i<<": ";
        cin>>arr[i];
    }
    //First Method
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
              int x=arr[i];
              arr[i]=arr[j]; //Here the arr[i] value vanishes so to remember the value we used int x
              arr[j]=x;
            }
        }
    }

    //Second Method
    /*for(int shrink=0;shrink<size;shrink++)
    {
      for(int i=shrink;i<size;i++)  //For excluding out the sorted ones
      {
          if(arr[shrink]>arr[i])   //for sorting the min values to first positions
          {
              int temp=arr[shrink];
              arr[shrink]=arr[i];
              arr[i]=temp;
          }
      }
    }*/
    cout<<"Increasing order is: ";
    for(int i=0;i<size;i++)
    {
    cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

