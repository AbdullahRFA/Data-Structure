#include<iostream>
using namespace std;

void delete_element(int ara[],int value,int position,int n)
{
     for(int i=0; i<n; i++)
    {
        if(ara[i]==value)
        {
            position=i;
        }
    }
    for(int k=position; k<n; k++)
    {
        ara[k]=ara[k+1];
    }
}
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
    int value,position;
    cout<<"Enter the value which do you want to delete from the array: "<<endl;
    cin>>value;
   delete_element(ara,value,position,n);
    cout<<"After deleting: "<<endl;
    for(int i=0; i<n-1; i++)
    {
        cout<<ara[i]<<" ";
    }

    return 0;
}
