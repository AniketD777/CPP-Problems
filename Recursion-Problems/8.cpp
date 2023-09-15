//Check first and last occurrence
#include<iostream>
using namespace std;

int first(int arr[],int size,int key,int i)
{
   if(i==size)
   {
       return -1;
   }
   if(arr[i]==key)
   {
       return i;
   }
   return first(arr,size,key,i+1); 
}

int last(int arr[],int size,int key,int i)
{
   if(i==size)
   {
       return -1;
   }
   if(last(arr,size,key,i+1)!=-1)
   {
       return last(arr,size,key,i+1);
   }
   if(arr[i]==key)
   {
       return i;
   }
   return -1; 
   
}

int main()
{
    int arr[]={1,2,1,4,1,5};
    cout<<first(arr,6,1,0);
    cout<<endl;
    cout<<last(arr,6,1,0)<<endl;
    return 0;
}
