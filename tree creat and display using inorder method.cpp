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
    cout<<"Enter root value: ";cin>>x;
    root=new node;
    root->data=x;
    root->lchild=root->rchild=NULL;
    q.push(root);
    while(!q.empty())
    {
        temp=q.front();
        q.pop();
        cout<<"Enter left child of "<<temp->data<<": ";
        cin>>x;
        if(x!=-1)
        {
            newnode=new node;
            newnode->data=x;
            newnode->lchild=newnode->rchild=NULL;
            temp->lchild=newnode;
            q.push(newnode);
        }
        cout<<"Enter right child of  "<<temp->data<<":  ";
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
void treeDisplay(struct node *p)
{
    if(p==NULL)
    {
        return;
         }
        treeDisplay(p->lchild);
        cout<<p->data<<" ";
        treeDisplay(p->rchild);

}
int main()
{
    Treecreate();
    treeDisplay(root);
    return 0;
}
