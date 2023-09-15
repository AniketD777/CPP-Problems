//To check given three no.s are Pythagorean triplets or not.
#include<iostream>
using namespace std;

int max(int a,int b,int c) //Function to find max of the three numbers
{
    int maxVal;
    if(a>b)
    {
        if(a>c)
        {
         maxVal=a;  
        }
        else
        {
         maxVal=c;
        }
    }
    else
    {
        if(b>c)
        {
         maxVal=b;
        }
        else
        {
         maxVal=c;
        }
    }
    return maxVal;
}

bool check(int a,int b,int c) //To check pythagoras theorem
{
    int x=max(a,b,c);
    int y,z;
    if(x==a)
    {
        y=b;
        z=c;
    }
    else if(x==b)
    {
        y=a;
        z=c;
    }
    else  //(x==c)
    {
        y=a;
        z=b;
    }
    if(x*x==y*y+z*z)   //Pythagoras theorem(where 'x' is maxVal as per the logic)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main() //Function where input occurs and output is given
{
    cout<<"To check pairs are pythagorean triplets?\n";
    cout<<"Enter the three numbers:\n";
    int a,b,c;
    cin>>a>>b>>c;
    if(check(a,b,c))    //If true
    {
        cout<<"Pythagorean Triplet!";
    }
    else                //If false
    {
        cout<<"Not a Pythagorean Triplet!";
    }
return 0;
}


