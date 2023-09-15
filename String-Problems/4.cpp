//To convert lowercases to uppercases
#include<iostream>
#include<string>
using namespace std;

int main()
{
    cout<<"Difference between upper and lower case chars is: "<<'a'-'A'<<endl;
    string str;
    cout<<"Enter string in to convert: ";
    getline(cin,str);
    
    //lower to upper
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
           str[i]-=32;   //32 is because of difference between upper
        }                // and lower case characters
    }
    cout<<"In uppercase is: "<<str<<endl;

    //upper to lower
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]+=32;
        }
    }
    cout<<"In lowercase is: "<<str<<endl;
    return 0;
}
