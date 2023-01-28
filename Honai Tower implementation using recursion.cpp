#include<bits/stdc++.h>
using namespace std;
void TOWER(int n,char BEG,char AUX,char END)
{
    if(n<=0)
    {
        cout<<"Illegal number of disc\n"<<endl;
        return ;
    }
    else if(n==1)
    {
        cout<<BEG<<" -> "<<END<<endl;
    }
    else
    {
        TOWER(n-1,BEG,END,AUX);
        TOWER(1,BEG,AUX,END);
        TOWER(n-1,AUX,BEG,END);
    }
}
int main()
{
    while(1)
    {
        int n;
        cout<<"\nEnter the number of disc(TO EXIT PRESS 100): ";
        cin>>n;
        if(n==100)
        {
            break;
        }
        TOWER(n,'A','B','C');
        cout<<"Total number of moves: "<<pow(2,n)-1<<endl<<endl;
    }

    return 0;
}
