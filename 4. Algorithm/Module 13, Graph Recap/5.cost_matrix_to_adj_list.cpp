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

    vector<pair<int,int>>adj[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(mat[i][j]>0)
                adj[i].push_back({j,mat[i][j]});
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<i<<" -> ";
        for(auto x:adj[i])
        {
            cout<<"{"<<x.first<<", "<<x.second<<"} ";
        }
        cout<<endl;
    }

    return 0;
}

/*
input: 4
0 5 -1 -1
-1 0 6 -1
-1 -1 0 7
-1 8 7 0
*/