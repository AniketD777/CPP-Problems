//Insertion sort
#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter size of array: ";
    int size;
    cin>>size;
    cout<<"Enter value for position:\n";
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cout<<i<<": ";
        cin>>arr[i];
    }
    for(int i=1;i<size;i++)
    {
        int temp=arr[i];
        int j=i-1;
        while(arr[j]>temp && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp; //while loop se bhar aate hi j ki value 1 minus hogi iseliye +1
    }
    cout<<"Increasing order is: ";
    for(int i=0;i<size;i++)
    {
       cout<<arr[i]<<" ";
    }
  return 0;
}
