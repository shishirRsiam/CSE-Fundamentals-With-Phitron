#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int mat[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>mat[i][j];
        }
    }

    vector<int> adj[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(mat[i][j])
                adj[i].push_back(j);
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<i<<" -> ";
        for(auto x:adj[i])
            cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}

/*
input: 4
0 1 0 0
0 0 1 0
0 0 0 1
0 1 1 0
*/