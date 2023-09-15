//To find unpaired elements present(For two single elements) 
#include<iostream> //(Eg.[1,1,2,2,3,6])
using namespace std;

int FirstUn(int freq,int Xor,int arr[],int size)//This is the Third function/Step
{ 
   for(int i=0;i<size;i++)
   {
       if((arr[i]>>freq)&1==1)
       {
          Xor=Xor^arr[i];//To xor with those only element whose first setbit is at same positon
       }                 //as the Xor of both the unpaired elements together from the RHS
   }
   return Xor;
}

int SecUn(int FirstUn,int Xor)//This is the Fourth or the Final function/step.
{
    int SecUn=(FirstUn^Xor);
    return SecUn;
}

int CheckBit(int Xor)//Then this is the Second function/step
{
    int freq=0;
    while((Xor&1)!=1)//To find the first setbit from right hand side
    {
       Xor=Xor>>1;
       freq++;
    }
    return freq;
}

int find(int arr[],int size) //This is the First function/step which acts
{
    int Xor=0;
    for(int i=0;i<size;i++)
    {
        Xor=Xor^arr[i];
    }
    return Xor;
}

int main()
{
    int size;
    cout<<"Enter size of input array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter element for the position: "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<i<<": ";
        cin>>arr[i];
    }
    
    int Xor=find(arr,size);//Xor of both unpaired ones together
    int freq=CheckBit(Xor);//last bitset(ie.'1') for Xor
    int FirstUnpair=FirstUn(freq,Xor,arr,size);//To get first unpaired element
    int SecondUnpair=SecUn(FirstUnpair,Xor);//To get second unpaired element

    cout<<"First Element is: "<<FirstUnpair<<endl;
    cout<<"Second Element is: "<<SecondUnpair<<endl;

    return 0;
}
