#include<bits/stdc++.h>
using namespace std;
#define N 5
int s_tack[N];
int top=-1;
void p_ush()
{
    int n;
    cout<<"Enter how many data do you want to input: ";
    cin>>n;
    if(top==N-1)
    {
        cout<<"\nOverflow, You can't entry any data.\n"<<endl;
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            int m;
            cin>>m;
            top++;
            s_tack[top]=m;
        }

    }
}

void p_op()
{
    int item;
    if(top == -1)
    {
        cout<<"\nYou can't this operation because stack is not created yet.\n"<<endl;
    }
    else
    {
        item=s_tack[top];
        top--;
        cout<<"\nThe Pop item is: "<<item<<endl<<endl;
    }
}

void t_op()
{
    if(top==-1)
    {
        cout<<"\nYou can't this operation because stack is not created yet.\n"<<endl;
    }
    else
    {
        cout<<"\nHere the top most element is: "<<s_tack[top]<<endl<<endl;
    }
}
void d_isplay()
{
    if(top==-1)
    {
        cout<<"\nYou can't this operation because stack is not created yet.\n"<<endl;
    }
    else
    {

        int i;
        cout <<"\nThe stack elements are: ";
        for(i=top; i>=0; i--)
        {
            cout<<s_tack[i]<<" ";
        }
        cout<<endl<<endl;
    }
}
int main()
{
    cout<<"1.Push\n2.Pop\n3.Top\n4.Display\n0.Exit\nEnter your choice: ";
    int n;
    cin>>n;
    switch(n)
    {
    case 1:
        p_ush();
        d_isplay();
        main();
        break;
    case 2:
        p_op();
        d_isplay();
        main();
        break;
    case 3:
        t_op();
        d_isplay();
        main();
        break;
    case 4:
        d_isplay();
        main();
        break;
    case 0:
        exit(0);

    }
    return 0;
}

