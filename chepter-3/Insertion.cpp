#include<iostream>
#include<string.h>
using namespace std;

void inserting_string(string s1,string s2,int position)
{
    s1.insert(position-1,s2);
    cout<<"After inseting : "<<s1<<endl;
}
int main()
{
    string s1,s2;
    cout<<"Enter the main string: "<<endl;
    getline(cin,s1);
    cout<<"Enter the inserting string: "<<endl;
    getline(cin,s2);
    cout<<"Enter the position where do you want to insert: ";
    int position;
    cin>>position;
    cout<<endl<<"Before insertion : "<<s1<<endl;
    inserting_string(s1,s2,position);
    return 0;
}
