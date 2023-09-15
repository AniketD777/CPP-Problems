//Hexadecimal to decimal conversion
#include<iostream>
#include<bits/stdc++.h> //For using size()
using namespace std;

int hexTOdec(string hex)
{
  int sum=0;
  int powOf16=1;
  int lenOfhex=hex.size(); //To determine no. of characters in input
  for(int i=lenOfhex-1;i>=0;i--)  //Last character is lenOfhex-1 because
  {                               //for array counting starts from 0
      if(hex[i]>='0' && hex[i]<='9')//quotes are very important(As we input a string of characters)
      {
          sum+=(hex[i]-'0')*powOf16; //quotes are very important
      }
      else if(hex[i]>='a' && hex[i]<='f')
      {    //a=97 in ASCII, so to make it in decimal a-a=0,b-a=1,c-a=2,......
          sum+=(hex[i]-'a'+10)*powOf16;  //now for hexa. we know a=10  
      }                               //or a=0+10,b=11=1+10 for
                                      //this function
      powOf16*=16; //to form increasing power of 16
  }
  return sum;                                    
}

int main()
{
  cout<<"To convert hexadecimal to decimal:\n";
  cout<<"Enter hexadecimal number: ";
  string hexa;
  cin>>hexa;
  cout<<"In decimal form is: "<<hexTOdec(hexa)<<endl;
 return 0;
}
