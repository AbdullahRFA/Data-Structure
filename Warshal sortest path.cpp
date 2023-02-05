#include<bits/stdc++.h>
#define Max 100000
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    int p[n][n],q[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>p[i][j];
            if(p[i][j]==0)
            {
               // if(i!=j)
                {

                    p[i][j]=Max;
                }
            }
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {

            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
     cout<<endl;
    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(p[i][k]+p[k][j]<p[i][j]);
                {
                p[i][j]=p[i][k]+p[k][j];
                 }
               // p[i][j]=min(p[i][j],(p[i][k]+p[k][j]));
            }
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {

            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
     cout<<endl;

}
