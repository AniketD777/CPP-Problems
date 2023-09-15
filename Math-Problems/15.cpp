//To add two binaries
#include<iostream>
using namespace std;

int reverse(int sum)
{
   int final=0;
   while(sum>0)
   {
    int lasdig=sum%10;
    final=final*10+lasdig;
    sum/=10;
   }
   return final;
}

int sum(int bi1,int bi2)
{
   int sum=0;
   int precarry=0;
   while(bi1>0 && bi2>0)
   {
      if(bi1%2==0 && bi2%2==0)
      {
         if(precarry==0)
         {
            sum=sum*10+0;
            precarry=0;
         }
         else if(precarry==1)
         {
            sum=sum*10+1;
            precarry=0;
         }
      }
      else if((bi1%2==0 && bi2%2==1) || (bi1%2==1 && bi2%2==0))
      {
         if(precarry==0)
         {
            sum=sum*10+1;
            precarry=0;
         }
         else if(precarry==1)
         {
            sum=sum*10+0;
            precarry=1;
         }
      } 
      else if(bi1%2==1 && bi2%2==1)
      {
         if(precarry==0)
         {
            sum=sum*10+0;
            precarry=1;
         }
         else if(precarry==1)
         {
            sum=sum*10+1;
            precarry=1;
         }
      }
      bi1/=10;
      bi2/=10;
   }  
   while(bi1>0)
   {
      if(bi1%1==0)
      { 
         if(precarry==0)
         {
           sum=sum*10+0;
           precarry=0; 
         } 
         else if(precarry==1)
         {
           sum=sum*10+1;
           precarry=0;
         } 
      }
      else if(bi1%2==1)
      {
         if(precarry==0)
         {
            sum=sum*10+1;
            precarry=0;
         }
         else if(precarry==1)
         {
            sum=sum*10+0;
            precarry=1;
         }
      }
      bi1/=10;
   }
   while(bi2>0)
   {
      if(bi2%2==0)
      {
         if(precarry==0)
         {
            sum=sum*10+0;
            precarry=0;
         }
         else if(precarry==1)
         {
            sum=sum*10+1;
            precarry=0;
         }
      }
      else if(bi2%2==1)
      {
         if(precarry==0)
         {
            sum=sum*10+1;
            precarry=0;
         }
         else if(precarry=1)
         {
            sum=sum*10+0;
            precarry=1;
         }
      }
      bi2/=10;
   }
   if(precarry==1)
   {
      sum=sum*10+1;
      precarry=0;
   }
   int finalsum=reverse(sum);
   return finalsum;
}

int main()
{   
   cout<<"Enter Binary 1: ";
   int bi1,bi2;
   cin>>bi1;
   cout<<"Enter Binary 2: ";
   cin>>bi2;
   cout<<"The sum of binaries is: "<<sum(bi1,bi2);
  
  return 0;
}
