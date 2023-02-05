#include<bits/stdc++.h>
using namespace std;
int INFO[20],LINK[20];
int HEAD,n,avail=1,Size;
void Create_Linked_List(int x)
{
    n=avail;
    INFO[n]=x;
    avail=LINK[avail];
    int p=HEAD;
    if(p==0)
    {
        HEAD=n;
        LINK[n]=0;
        return;
    }
    while(LINK[p]!=0)
    {
        p=LINK[p];
    }
    LINK[p]=n;
    LINK[n]=0;
    return;

}
void Insert_In_Linked_List(int index,int x)
{
    n=avail;
    INFO[n]=x;
    avail=LINK[avail];
    if(index==1)
    {
        HEAD= n;
        LINK[n]=index;
    }
    else
    {
        int i=1;
        int p =HEAD;
        while(i<index-1)
        {
            p=LINK[p];
            i++;
        }
        LINK[n]=LINK[p];
        LINK[p]=n;
    }
    cout<<endl;

}
void Delete_Node_In_Linked_List(int Position)
{
    int i=1;
    int p =HEAD;
    if(p==0)
    {
        cout<<"\nUnderflow!"<<endl;
        cout<<"Case LINKed list is empty"<<endl;
    }
    else if(Position==1)
    {
        HEAD=LINK[HEAD];
    }
    else
    {
        while(i!=Position-1)
        {
            p=LINK[p];
            i++;
        }
        n=LINK[p];
        LINK[p]=LINK[n];
    }
    return;
}
void Display_Linked_List()
{
    if(Size==0)
        cout<<"\n\t\tLINK list is empty\n\t\tCause linked list is not create yet "<<endl;
    else
    {
        int p=HEAD;
        cout<<"\n\t\tLINK list is : ";
        while(p!=0)
        {
            cout<<INFO[p]<<" ";
            p=LINK[p];
        }
        cout<<endl;
    }
    return;
}
int choice()
{
    int n;
    cout<<"\nPress:-\n\t1.Create.  \n\t2.Insert_at_any position.  \n\t3.Delete_any_position.  \n\t4.Display. \n\t5.Exit\n\tEnter your choice:-";
    cin>>n;
    return n;
}
int main()
{
    for(int i=1; i<20; i++)
    {
        LINK[i]=i+1;
    }
    while(1)
    {
        int ch=choice();
        if(ch==1)
        {
            int m;
            cout<<"\n\t\tThe Number of elements ";
            cin>>m;
            cout<<"\t\tEnter value one by one: ";
            for(int i=0; i<m; i++)
            {
                int x;
                cin>>x;
                Create_Linked_List(x);
                Size++;
            }
        }
        if(ch==2)
        {
            int pos,value;
            cout<<"Enter the inserting_position: ";
            cin>>pos;
            cout<<"Enter the inserting_value: ";
            cin>>value;
            Insert_In_Linked_List(pos,value);
            Size++;
        }
        if(ch==3)
        {
            int posi;
            cout<<"Enter the deleting position:  ";
            cin>>posi;
            Delete_Node_In_Linked_List(posi);
            Size--;
        }
        if(ch==4)
            Display_Linked_List();
        if(ch==5)
            break;
    }
}

