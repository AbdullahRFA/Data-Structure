#include<bits/stdc++.h>
#include<string.h>
using namespace std;

void PrintOccurrance(string txt,string pat)
{
    int found=txt.find(pat);
    while(found != string::npos)
    {
        cout<<"Pattern found at index "<<found+1<<" "<<endl;
        found=txt.find(pat,found+1) ;
    }
}

int main()
{
     cout<<"Enter any string for getting INDEX"<<endl;
    string txt;
    getline(cin,txt);
     cout<<"Enter any pattern for getting INDEX"<<endl;
    string pat;
    getline(cin,pat);
    PrintOccurrance(txt,pat);
    return 0;
}
