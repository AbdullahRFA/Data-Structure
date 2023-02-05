#include<bits/stdc++.h>
using namespace std;
void TOWER(int n,string a,string b,string c)
{
    if(n==0)
    {
        return ;
    }
    else
    {
        TOWER(n-1,a,c,b);
        cout<<"Moves "<<n<<" numbe disc from (("<<a<<" to "<<c<<"))"<<endl<<endl;
        TOWER(n-1,b,a,c);
    }
}
int main()
{
    while(1)
    {
        cout<<"\nEnter the number of disc(TO EXIT PRESS 100): ";
        int n;
        cin>>n;
        if(n==100)
        {
            break;
        }
        cout<<endl;
        TOWER(n,"BEGIN","AUXILIARY","END");
        cout<<"Total number of moves: "<<pow(2,n)-1<<endl<<endl;
    }

    return 0;
}
