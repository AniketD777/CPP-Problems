//To remove consecutive duplicates
#include<iostream>
using namespace std;

string dup(string s)
{
  if(s.length()==0)
  {
    return "";
  }
  if(s[0]==s[1])
  {
    return dup(s.substr(1));
  }
  cout<<s[0];
  return dup(s.substr(1));
}

int main()
{
    string s ="aabbccccccdeeeedeee";
    dup(s);
    return 0;
}
