//To search for the unpaired element within pair of three elements(Eg.[1,1,1,2,2,2,3])
#include<iostream>
using namespace std;

int setbit(int result,int pos)//Runs final for result ie. the element 
{
    return(result|(1<<pos));
}

int Check(int arr[],int size) //Runs First
{
    //int BitPosi[64];
    int result=0;
    for(int pos=0;pos<64;pos++)//For bit position
    {
        int freq=0;
        for(int j=0;j<size;j++)//For each element in array
        {
           if((arr[j]&(1<<pos))!=0)
           {
             freq++;
           }
        }
        if(freq%3!=0)
        {  
        result=setbit(result,pos);
        }       
    }
    return result;
}

int main()
{
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter Array elements: "<<endl;
    int i=0;
    while(i<size)
    {
        cout<<i<<": ";
        cin>>arr[i];
        i++;
    }
    
    cout<<"The unpaired element is: "<<Check(arr,size)<<endl; 
    
    return 0;
}
