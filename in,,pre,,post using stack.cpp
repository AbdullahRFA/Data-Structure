#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *left_child;
    Node *right_child;
};

Node* Ceate_node()
{
    Node*  newNode =new Node;
    int x;
    cout<<"Enter Data(press '0' for no data) : "; cin>>x;
    if(x==0) return 0;
    newNode->data=x;
    cout<<"Enter left_child of "<<x<<" : "<<endl;
    newNode->left_child=Ceate_node();
    cout<<"Enter right_child of "<<x<<" : "<<endl;
    newNode->right_child=Ceate_node();
    return newNode;
}
void inorder(Node *root){
    stack<Node *> s;
    Node *Head = root;

    while (Head != NULL || s.empty() == false) {
        while (Head !=  NULL) {
            s.push(Head);
            Head = Head->left_child;
        }

        Head = s.top();
        s.pop();

        cout << Head->data << " ";

        Head = Head->right_child;
    }
}

void preorder(Node *root)
{
    stack<Node *> s;
    s.push(root);

    while (s.empty() == false) {
        Node *Head = s.top();
        cout << Head->data << " ";
        s.pop();

        if (Head->right_child)
            s.push(Head->right_child);
        if (Head->left_child)
            s.push(Head->left_child);
    }
}

void postorder(Node *root)
{
    stack<Node *> s;

    Node *Head = root;

    while (Head != NULL || s.empty() == false) {

        if (Head !=  NULL) {
            s.push(Head);
            Head = Head->left_child;
        }

        else {
            Node *temp = s.top()->right_child;

            if (temp == NULL) {
                temp = s.top();
                s.pop();
                cout << temp->data << " ";

                while (!s.empty() && temp == s.top()->right_child) {
                    temp = s.top();
                    s.pop();
                    cout << temp->data << " ";
                }
            }
            else
                Head = temp;
        }
    }
}

int main()
{
    Node *root = Ceate_node();
    cout << "\nInorder traversal of binary tree is \n";
    inorder(root);

    cout << "\nPreorder traversal of binary tree is \n";
    preorder(root);

    cout << "\nPostorder traversal of binary tree is \n";
    postorder(root);

    return 0;
}
