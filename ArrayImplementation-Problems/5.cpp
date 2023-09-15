//Sorting with bubble method (First Method)
#include<iostream>
using namespace std;

int main()
{
   cout<<"To sort array in increasing order:\n";
   cout<<"Enter size of array: ";
   int size;
   cin>>size;
   int arr[size];
   for(int i=0;i<size;i++)
   {
       cout<<"Enter value for position "<<i<<": ";
       cin>>arr[i];
   }
   for(int j=size-1;j>0;j--)
   {
     for(int i=0;i<=j;i++)
     {
       if(arr[i]>arr[i+1])
       {
           int x=arr[i];
           arr[i]=arr[i+1];
           arr[i+1]=x;
       }
     }
   }
   cout<<"Increasing order is: ";
   for(int i=0;i<size;i++)
   {
   cout<<arr[i]<<" ";
   }
}

//Second method (Better method as per logic)

/*#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter size of array: ";
    int size;
    cin>>size;
    int arr[size];
    cout<<"Feed data for:\n";
    for(int i=0;i<=size-1;i++)
    {
        cout<<i<<": ";
        cin>>arr[i];
    }
    for(int shrink=size-1;shrink>=0;shrink--)
    {
     for(int pre=0;pre<shrink;pre++)
     {
        int next=pre+1;
        if(arr[pre]>arr[next])
        {
            int temp=arr[next];
            arr[next]=arr[pre];
            arr[pre]=temp;
        }
     }
    }
    for(int i=0;i<size;i++)
    {
     cout<<arr[i]<<" ";
    }
 return 0;
}*/

