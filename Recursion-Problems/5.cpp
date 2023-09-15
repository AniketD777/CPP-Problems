//To check is in ascending order or not
#include<iostream>
using namespace std;

bool check(int arr[],int size)
{
   if(size==1)
   {
       return true;
   }
   return arr[0]<arr[1] && check(arr+1,size-1);
}

int main()
{
    int arr[]={1,2,4,5,6};
    cout<<check(arr,5)<<endl;
    return 0;
}
