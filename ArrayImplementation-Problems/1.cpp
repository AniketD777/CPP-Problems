// Max and min values
#include<iostream>
#include<climits> //Package to use INT_MIN and INT_MAX
using namespace std;

int main()
{
    cout<<"Input No. of values: ";
    int n;
    cin>>n;
    int val[n];     //Array of size 'n'
    //For input
    for(int i=0;i<n;i++)
    {
      cout<<"Enter value of position "<<i<<":";
      cin>>val[i];
    }
    //For specifying min value
    int minVal=INT_MAX; //To set max value of integer possible by the program(e.g 73489787480720)
    for(int i=0;i<n;i++)
    {
      if(minVal>val[i])
      {
        minVal=val[i];
      }
    }
    //For specifying max value
    int maxVal=INT_MIN; //To set min value of integer possible by the program(e.g -7234787487)
    for(int i=0;i<n;i++)
    {
      if(maxVal<val[i])
      {
        maxVal=val[i];
      }
    }
    cout<<"Max Value is: "<<maxVal<<endl;
    cout<<"Min Value is: "<<minVal<<endl;
 
  return 0;    
}
