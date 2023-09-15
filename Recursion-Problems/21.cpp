//Robbery problem - Maximise items value for constrained weight
#include<iostream>
using namespace std;

int rob(int val[],int wt[],int n,int constr)
{
    if(n==0 || constr==0)
    {
        return 0;
    }
    if(wt[n-1]>constr)
    {
        return rob(val,wt,n-1,constr);//exclude that item
    }
    return max(rob(val,wt,n-1,constr-wt[n-1])+val[n-1],rob(val,wt,n-1,constr));
}                  //Include                               //Exclude

int main()
{
    int wt[]={10,20,30};
    int val[]={100,50,150};
    cout<<rob(val,wt,3,50)<<endl;
    return 0;
}
