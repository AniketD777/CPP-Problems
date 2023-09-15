//Longest substring without repeating characters
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    string s="pwwwkew";
    vector<int> a(256,-1);//To include every ASCII character possible
                         //and to initialize with -1
    int start=-1;//This is a checker that inspects that character
                 //repeated or not and is the index from where
                 //the substring length is measured.
    int maxLen=0;
    for(int i=0;i<s.length();i++)
    {
        if(a[s[i]]>start)
        {
            start=a[s[i]];
        }
        a[s[i]]=i;
        maxLen=max(maxLen,i-start);
    }
    cout<<"Maximum length substring possible is: "<<maxLen<<endl;
    return 0;
}
