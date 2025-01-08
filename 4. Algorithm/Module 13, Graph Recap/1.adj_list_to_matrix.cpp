#include<bits/stdc++.h>
using namespace std;

void convert_(int n, vector<int>adj[])
{
    int mat[n][n];
    memset(mat,0,sizeof(mat));
    for(int i=0;i<n;i++)
    {
        for(int ch:adj[i])
        {
            mat[i][ch]=1;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n,e; cin>>n>>e;
    vector<int>adj[n];
    while(e--)
    {
        int a,b; cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    convert_(n,adj);

    return 0;
}

/*
input: 4 4
1 0
0 2
0 3
2 3
*/