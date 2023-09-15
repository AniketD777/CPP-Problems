//Use of functions for Math nCr formula

#include<iostream>
using namespace std;

int fac(int x)
{
  int prod=x;  //This factorial method doesn't work for 0! (Refer 8.cpp)
  for(int i=1;i<x;i++)
  {
   prod*=i;
  }
  return prod;
}

int main()
{
  cout<<"To show no. of combinations(nCr) possible:"<<endl;
  cout<<"Enter total(n) objects:";
  int n,r;
  cin>>n;
  cout<<"Enter no. of selections(r) at once:";
  cin>>r;
  int combi=fac(n)/(fac(r)*fac(n-r));
  cout<<combi;
  
  return 0;
}
