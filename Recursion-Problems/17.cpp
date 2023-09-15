//To print permutation of a string 
#include<iostream>
using namespace std;

void per(string s,string ans)
{
    if(s.length()==0)
    {
       cout<<ans<<endl;
       return;
    }
    for(int i=0;i<s.length();i++)
    {
       char c=s[i];
       string str=s.substr(0,i)+s.substr(i+1);
       per(str,ans+c);
    }
    
}
int main()
{
    per("abc","");
    return 0;
}


