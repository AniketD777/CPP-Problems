// Most occuring character
#include<iostream>
#include<string>
#include<climits>//To use INT_MIN
using namespace std;

int main()
{
    string str;
    cout<<"Enter string: ";
    getline(cin,str);
    int freq[26];
    for(int i=0;i<26;i++)
    {
        freq[i]=0; //To intialize all array indexes with 0
    }
    for(int i=0;i<str.length();i++)
    {
       freq[str[i]-'a']++;
    }
    
    int max=INT_MIN;
    char character='a';
    for(int i=0;i<26;i++)
    {
        if(freq[i]>max)
        {
            max=freq[i];
            character='a'+i;
        }
    }
    cout<<"The max occuring character is '"<<character<<"' occuring "<<max<<" times."<<endl;
    
    return 0;
}
