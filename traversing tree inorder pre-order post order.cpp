#include<bits/stdc++.h>
#include<iostream>
#include<queue>
using namespace std;
struct node
{
    struct node *lchild, *rchild;
    int data;
};
struct node *root=NULL;
void Treecreate()
{
    int x;
    struct node *temp, *newnode;
    queue<node *>q;
    cout<<"\n\t\tEnter root value: ";
    cin>>x;
    root=new node;
    root->data=x;
    root->lchild=root->rchild=NULL;
    q.push(root);
    while(!q.empty())
    {
        temp=q.front();
        q.pop();
        cout<<"\t\t\tEnter left child of "<<temp->data<<": ";
        cin>>x;
        if(x!=-1)
        {
            newnode=new node;
            newnode->data=x;
            newnode->lchild=newnode->rchild=NULL;
            temp->lchild=newnode;
            q.push(newnode);
        }
        cout<<"\t\t\tEnter right child of  "<<temp->data<<":  ";
        cin>>x;
        if(x!=-1)
        {
            newnode=new node;
            newnode->data=x;
            newnode->lchild=newnode->rchild=NULL;
            temp->rchild=newnode;
            q.push(newnode);
        }
    }
}
void inorder(struct node *p)
{
    if(p==NULL)
    {
        return;
    }

    inorder(p->lchild);
    cout<<p->data<<" ";
    inorder(p->rchild);

}
void preOrder(struct node *p)
{
    if(p==NULL)
    {
        return;
    }
    cout<<p->data<<" ";
    preOrder(p->lchild);
    preOrder(p->rchild);

}
void postOrder(struct node *p)
{
    if(p==NULL)
    {
        return;
    }
    postOrder(p->lchild);
    postOrder(p->rchild);
    cout<<p->data<<" ";
}
int choice()
{
    int n;
    cout<<"Press:-\n\t1.Create\n\t2.Display_Inorder\n\t3.Display_Pre_Order\n\t4.Display_Post_Order\n\t0.Exit\n\tEnter your choice:-";
    cin>>n;
    return n;
}
int main()
{
    int ch;
    ch=choice();
    switch(ch)
    {
    case 1:
        Treecreate();
        main();
        break;
    case 2:
        cout<<"\n\t\t\tYour tree in IN_ORDER: ";
        inorder(root);
        cout<<endl;
        main();
        break;
    case 3:
        cout<<"\n\t\t\tYour tree in PRE_ORDER: ";
        preOrder(root);
        cout<<endl;
        main();
        break;
    case 4:
        cout<<"\n\t\t\tYour tree in POST_ORDER: ";
        postOrder(root);
        cout<<endl;
        main();
        break;
    case 0:
        exit(0);
    default:
        cout<<"\nYou have pressed wrong key,,Try again\n";
        main();
    }

    return 0;
}

