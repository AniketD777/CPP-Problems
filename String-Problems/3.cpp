//To sort strings in ascending order or descending order

#include<iostream>
#include<string>
#include<algorithm> //For Sorting out
using namespace std;

//Capital letters pehle aate hai then the small letters as per ASCII

int main()
{
    string a;
    cout<<"Enter String: ";
    getline(cin,a);
    sort(a.begin(), a.end());
    cout<<"In Ascending Order: "<<a<<endl;//Is ascending by default
//Syntax=> sort(kahaSe, KahaTak)

//To sort in desce..........
    sort(a.begin(),a.end(),greater<char>()); 
        //char can also be replaced with int in case of integers in string  
    cout<<"In Decending Order: "<<a<<endl;

    return 0;
}

