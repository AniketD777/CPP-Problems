//To find ways to set 2x1 tile on a 2xn floor
#include<iostream>
using namespace std;

int tile(int n)
{
   if(n==0)
   {
       return 0;
   }
   if(n==1)
   {
       return 1;
   }
   return tile(n-1) + tile(n-2);
}     //(Vertically)  (Horizontally)

int main()
{
    cout<<tile(2);
    return 0;
}
