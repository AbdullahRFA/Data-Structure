#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

void replace_string(string s,string replace_by_string,int initial_value,int length)
{
    s.replace(initial_value-1,length,replace_by_string);
    cout<<"After replacing : "<<s<<endl;
}
int main ()
{
    cout<<"Enter any string to replace any part: "<<endl;
    string s,replace_by_string;

    getline(cin,s);
     cout<<"Enter the repalcing string: "<<endl;
    getline(cin,replace_by_string);

    cout<<"Enter the initial value and length of the replacing part: "<<endl;
    int initial_value,length;
    cin>>initial_value>>length;

    cout<<endl<<"Before replacement : "<<s<<endl;

    replace_string(s,replace_by_string,initial_value,length);

    return 0;
}
