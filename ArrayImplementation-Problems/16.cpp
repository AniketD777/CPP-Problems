//To check palindrome => E.g. racecar, anna, madam, ......
#include<iostream>
#include<cstring>  //To use strlen
using namespace std;

int main()
{
    cout<<"Enter string: ";
    char arr[100];
    cin>>arr;
    int size=strlen(arr);
    bool state=1;
    for(int i=0;i<size;i++)
    {
        if(arr[i]!=arr[size-1-i])
        {
            state=0;
            break;
        }
    }
    if(state==0)
    {
        cout<<"Not a palindrome!";
    }
    else
    {
        cout<<"Is a palindrome!";
    }
        
  return 0;
}
