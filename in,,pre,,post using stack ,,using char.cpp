#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *left;
    Node *right;
};

Node* creat()
{
    Node*  newNode =new Node;
    int x;
    cout<<"Enter Data(press '0' for no data) : "; cin>>x;
    if(x==0) return 0;
    newNode->data=x;
    cout<<"Enter left Child of "<<x<<" : "<<endl;
    newNode->left=creat();
    cout<<"Enter Right child of "<<x<<" : "<<endl;
    newNode->right=creat();
    return newNode;
}
void inorder(Node *root){
    stack<Node *> s;
    Node *curr = root;

    while (curr != NULL || s.empty() == false) {
        while (curr !=  NULL) {
            s.push(curr);
            curr = curr->left;
        }

        curr = s.top();
        s.pop();

        cout << curr->data << " ";

        curr = curr->right;
    }
}

void preorder(Node *root)
{
    stack<Node *> s;
    s.push(root);

    while (s.empty() == false) {
        Node *node = s.top();
        cout << node->data << " ";
        s.pop();

        if (node->right)
            s.push(node->right);
        if (node->left)
            s.push(node->left);
    }
}

void postorder(Node *root)
{
    stack<Node *> s;

    Node *curr = root;

    while (curr != NULL || s.empty() == false) {

        if (curr !=  NULL) {
            s.push(curr);
            curr = curr->left;
        }

        else {
            Node *temp = s.top()->right;

            if (temp == NULL) {
                temp = s.top();
                s.pop();
                cout << temp->data << " ";

                while (!s.empty() && temp == s.top()->right) {
                    temp = s.top();
                    s.pop();
                    cout << temp->data << " ";
                }
            }
            else
                curr = temp;
        }
    }
}

int main()
{
    Node *root = creat();
    cout << "\nInorder traversal of binary tree is \n";
    inorder(root);

    cout << "\nPreorder traversal of binary tree is \n";
    preorder(root);

    cout << "\nPostorder traversal of binary tree is \n";
    postorder(root);

    return 0;
}

