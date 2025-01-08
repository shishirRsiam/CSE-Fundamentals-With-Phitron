#include<bits/stdc++.h>
using namespace std;

void convert_(int n, vector<pair<int,int>>adj[])
{
    int mat[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            mat[i][j]=-1;
            if(i==j) mat[i][j]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(auto x:adj[i])
        {
            int node = x.first, cost = x.second;
            mat[i][node] = cost;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<mat[i][j]<<" ";
        cout<<endl;
    }
}

int main()
{
    int n,e; cin>>n>>e;
    vector<pair<int,int>>adj[n];
    while(e--)
    {
        int a,b,c; cin>>a>>b>>c;
        adj[a].push_back({b,c});
    }

    convert_(n,adj);

    return 0;
}

/*
input: 4 5
1 0 5
0 2 6
3 0 8
2 3 7
3 2 7
*/