//To search Bilinearly in Array (A good practice to reduce time of search) (Refer Video 8.1 for concept)
#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter no. of elements: ";
    int size;
    cin>>size; 
    int arr[size];
    cout<<"Enter element in increasing order for "<<endl;
    for(int i=0;i<size;i++) //For element input
    {
        cout<<i<<": ";
        cin>>arr[i];
    }
    cout<<"Enter Key to search for: ";
    int key;
    cin>>key;
    int i=0;
    int j=size;
    while(i<=j)
    { 
       if(arr[(i+j)/2]==key)
       { 
          cout<<"Valid Key!";
          break;
       }
       else if(arr[(i+j)/2]<key)
        {
          i=((i+j)/2)+1;
        }
       else if(arr[(i+j)/2]>key)
        {
          j=((i+j)/2)-1;
        }
       if(i>j) //Agar i ki value j se badi hui toh key match ni hui
       {
          cout<<"Invalid key!"<<endl;
       }
    }
    
   return 0;
}
