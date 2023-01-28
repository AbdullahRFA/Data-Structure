#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter how many number do you want to input: "<<endl;
    cin>>n;
    int ara[n];


    cout<<"Enter the element one by one: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>ara[i];
    }


    int num,posi=0;
    cout<<"Enter the finding value: "<<endl;
    cin>>num;

    for(int i=0;i<n;i++)
    {
        if(ara[i]==num)
        {
            posi=i;
            break;
        }
    }


    if(posi>0)
    {
        cout<<num<<" found at "<<posi<<" index and "<<posi+1<<" position."<<endl;
    }
    else
    {
        cout<<"Not found"<<endl;
    }

  return 0;
}
