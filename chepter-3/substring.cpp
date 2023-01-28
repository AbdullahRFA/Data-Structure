#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter any string for getting substring"<<endl;
    getline(cin,s);

    int initial_value,length_Of_The_string;
    cout<<"Enter initial value and the length of the string: "<<endl;
    cin>>initial_value>>length_Of_The_string;

    int length=initial_value+length_Of_The_string-2;

    for(int i=initial_value-1; i<=length; i++)
    {
        cout<<s[i];
    }

    return 0;
}
