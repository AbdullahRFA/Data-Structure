#include<bits/stdc++.h>
#define Max 15
using namespace std;
void buildadjm(int adj[][Max],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"If there is an edge from "<<i<<" to "<<j<<" entre 1, else 0 \n";
            cin>>adj[i][j];
        }
    }
}
int outdeg(int adj[][Max],int x,int n)
{
    int i,count=0;
    for(i=0;i<n;i++)
    {
        if(adj[x][i]==1)count++;
        return (count);
    }
}
int indeg(int adj[][Max],int x,int n)
{
    int i, count=0;
    for(i=0;i<n;i++)
    {
        if(adj[i][x]==1)count++;
        return(count);
    }
}
int main()
{
    int adj[Max][Max],node,n,i;
    cout<<"The number of nodes in the graph maximum = "<<Max<<endl;
    cin>>n;
    buildadjm(adj,n);
    for(i=0;i<n;i++)
    {
        cout<<"The node indegree "<<i<<" is "<<indeg(adj,i,n)<<endl;
        cout<<"The nodes out degree "<<i<<" is "<<outdeg(adj,i,n)<<endl;
    }
}
