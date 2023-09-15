//To check no.s of 1's in binary 
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter number: ";
    cin>>num;
    int freq=1;//1 because loop pehli baari me hi terminate ho jaega toh freq++ ni
    int n=num; //ho paega that's why 1 
    if(num!=0)
    {
        while((n&(n-1))!=0)//Previous num ke saath '&' krne se we can get no. of 
        {                   //1's (Refer 14.2 2nd question for algorithm)
           n=(n&(n-1));
           freq++;
        }
        cout<<"Number of 1's are: "<<freq<<endl;
    }
    else
    {
        cout<<"Number of 1's is: 0"<<endl;
    }
   
    return 0;
}
