#include<iostream>
using namespace std;
void bubble_sort(int ara[],int n)
{
    int temp;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(ara[j]>ara[j+1])
            {
                temp=ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=temp;
            }
        }
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
    bubble_sort(ara,n);
    for(int i=0; i<n; i++)
    {
        cout<<ara[i]<<" ";
    }
    return 0;
}
