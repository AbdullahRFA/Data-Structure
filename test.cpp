#include<bits/stdc++.h>
using namespace std;
int data[20],link[20],first,n,avail=1,Size;
void create(int x)
{
    n=avail;
    data[n]=x;
    avail=link[avail];
    int p=first;
    if(p==0)
    {
        first=n;
        link[n]=0;
        return;
    }
    while(link[p]!=0)
    {
        p=link[p];
    }
    link[p]=n;
    link[n]=0;
    return;

}
void Insert(int index,int x)
{
    n=avail;
    data[n]=x;
    avail=link[avail];
    if(index==1)
    {
        first= n;
        link[n]=index;
    }
    else
    {
        int i=1;
        int p =first;
        while(i<index-1)
        {
            p=link[p];
            i++;
        }
        link[n]=link[p];
        link[p]=n;
    }
    cout<<endl;

}
void del(int index)
{
    int i=1;
    int p =first;
    if(p==0)
    {
        cout<<"Underflow!"<<endl;
        cout<<"Case linked list is empty"<<endl;
    }
    else if(index==1)
    {
        first=link[first];
    }
    else
    {
        while(i!=index-1)
        {
            p=link[p];
            i++;
        }
        n=link[p];
        link[p]=link[n];
    }
    return;
}
void traverse()
{
    if(Size==0)
        cout<<"Link list is empty "<<endl;
    else
    {
        int p=first;
        cout<<"link list : ";
        while(p!=0)
        {
            cout<<data[p]<<" ";
            p=link[p];
        }
        cout<<endl;
    }
    return;
}
int choice()
{
    int n;
    cout<<"1.create  2.insert  3.delete  4.traverse  5. exit"<<endl;
    cin>>n;
    return n;
}
int main()
{

    int ch=choice();
    for(int i=1; i<20; i++)
    {
        link[i]=i+1;
    }

    switch(ch)
    {
    case 1:

        int m;
        cout<<"The Number of elements ";
        cin>>m;
        for(int i=0; i<m; i++)
        {
            int x;
            cin>>x;
            create(x);
            Size++;
        }
        main();
        break;
    case 2:
        int i,x;
        cout<<"Please insert the position and value ";
        cin>>i>>x;
        Insert(i,x);
        Size++;
        main();
        break;
    case 3:
        int y;
        cout<<"Enter the position to delete ";
        cin>>y;
        del(y);
        Size--;
        main();
        break;
    case 4:
        traverse();
        main();
        break;
    case 5:
        exit(0);
    }
}

