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
    int first_index=0,last_index=n-1,mid_index,num;
    cout<<"Enter the finding value: "<<endl;
    cin>>num;
    while(first_index<=last_index)
    {
        mid_index=(first_index+last_index)/2;
        if(ara[mid_index]==num)
        {
            break;
        }
        else if(ara[mid_index]>num)
        {
            last_index=mid_index-1;
        }
        else
        {
            first_index=mid_index+1;
        }
    }
    if(first_index>last_index)
    {
        cout<<"Finding value is out of the range"<<endl;
    }
    else
    {
        cout<<ara[mid_index]<<" Found at "<<mid_index+1<<endl;
    }
    return 0;
}
