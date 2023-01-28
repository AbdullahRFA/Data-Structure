#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    cout<<"Enter the first string for concatenation: "<<endl;
    string s1,s2;
    getline(cin,s1);
    cout<<"Enter the first string for concatenation: "<<endl;
    getline(cin,s2);

    s1.append(s2);
    cout<<s1;
    return 0;
}
