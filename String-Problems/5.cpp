//To convert string to upper case using the function
#include<iostream>
#include<string>
#include<algorithm> //To use the transform functionality 
using namespace std;

int main()
{
    string str;
    cout<<"Input string: ";
    getline(cin,str);
    transform(str.begin(),str.end(),str.begin(),::toupper);
//syntax=> tra...(kahaSeInput,kahaTakInput,kahaSeOutput,KyaKarnaHai?)
    cout<<"In Uppercase: "<<str<<endl;
    transform(str.begin(),str.end(),str.begin(),::tolower);
    cout<<"In Lowercase: "<<str<<endl;
    return 0;
}
