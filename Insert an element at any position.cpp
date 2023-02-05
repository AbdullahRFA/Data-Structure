#include<iostream>
using namespace std;

void insert_element(int ara[],int value,int position,int n)
{
    for(int i=n; i>=position; i--)
    {
        ara[i]=ara[i-1];
    }
    ara[position-1]=value;

}

int main()
{
    int n;
    cout<<"Enter how many number do you want to input: "<<endl;
    cin>>n;
    int ara[1000];
    cout<<"Enter the element one by one: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    int value,position;
    cout<<"Enter new element: "<<endl;
    cin>>value;
    cout<<"Enter the position where do you want to insert: "<<endl;
    cin>>position;

    insert_element(ara,value,position,n);

       n++;
    cout<<"After inserting the value: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<ara[i]<<" ";
    }

    return 0;
}
