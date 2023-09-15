//Arithmetic array question
#include<iostream>
using namespace std;

int max(int count)
{
   int maxi=2;
   if(maxi<count)
   {
       maxi=count;
   }
   return maxi;
}

int main()
{
    cout<<"Enter size of array: ";
    int size;
    cin>>size;
    cout<<"Enter value for position-\n";
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cout<<i<<": ";
        cin>>arr[i];
    }
    int diff=arr[1]-arr[0];
    int count=2;
    int final=0;
    for(int i=0;i<size;i++)
    {
        for(int j=i;j<size-1;j++)
        {
           if((arr[j+1]-arr[j])==diff)
            {
               count++;  
            }
            else
            {
               diff=arr[j+1]-arr[j];
               count=2;
            }
            final=max(count);
        }
    }
    cout<<final<<endl;

    return 0;
}
