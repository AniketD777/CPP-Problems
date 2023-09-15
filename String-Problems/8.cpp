//Longest substring without repeating characters (My algorithm)
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s="pwwwkew";
    int size=0;
    for(int i=0;i<s.length();i++)
    {
        int arr[26]={0};//The alphabets array (to set 0 or 1)
        int j;         //also with every iteration gets set to 0
        for(j=i;j<s.length();j++)
        {
            if(arr[s[j]-'a']==0)
            {
               arr[s[j]-'a']=1;
            }
            else
            {
               break;
            }
        }
        size=max(size,j-i);/*j-i gives the length of the 
                        current substring and+1 is not 
                        there because j is first incremented 
                        and then the conditon is checked*/
    }
    cout<<size;              
    return 0;
}
