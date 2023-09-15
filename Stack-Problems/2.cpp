//To reverse a sentence using stacks
#include<iostream>
#include<stack> //STL for using stack functions
using namespace std;

void revSentence(string s)
{
    stack<string> st;
    for(int i=0;i<s.length();i++)
    {
        string word="";
        while(s[i]!=' ' && i<s.length())//Jab tak whitespace nhi
        {                               //tab tak chalega
            word+=s[i];//Concatenation
            i++;//To increment for next character
        }
        st.push(word);//Push the word in stack
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";//Here in stack STL 
        st.pop();           //'top' is defined not 'Top'
    }//The topmost word gets printed first ie. in reverse order
}    //we can get back our sentence

int main()
{
    string s;
    cout<<"Enter String: ";
    getline(cin,s);
    revSentence(s);
    return 0;
}
