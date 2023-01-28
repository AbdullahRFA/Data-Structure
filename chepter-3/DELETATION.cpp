#include<iostream>
#include<string.h>
using namespace std;

void string_detet(string s,int initial_value,int length)
{
    s.erase(initial_value-1,length);
    cout<<"After deletation : "<<s<<endl;
}
int main()
{
    string s;
    cout<<"Enter any string to detete a particular part: "<<endl;
    getline(cin,s);
    cout<<"Enter the initial value and length of the deleting part: "<<endl;
    int initial_value,length;
    cin>>initial_value>>length;

    cout<<endl<<"Before deletation :"<<s<<endl;
    string_detet(s,initial_value,length);
}
