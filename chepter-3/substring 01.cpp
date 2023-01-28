#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter any string for getting substring"<<endl;
    getline(cin,s);

    int initial_value,length_Of_The_string;
    cout<<"Enter initial value and the length of the string: "<<endl;
    cin>>initial_value>>length_Of_The_string;

   string res=s.substr(initial_value-1,length_Of_The_string);
   cout<<res<<endl;

    return 0;
}

