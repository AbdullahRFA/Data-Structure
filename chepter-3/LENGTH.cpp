#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    cout<<"Enter any string for getting length: ";
    string s;
    getline(cin,s);
    int len=s.size();
    cout<<"The length of  "<<s<<" is "<<len<<endl;

    return 0;
}
