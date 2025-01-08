#include<bits/stdc++.h>
using namespace std;

long long mx = 1e18;

int main()
{

    long long n,e; cin>>n>>e; n++;
    vector<vector<long long>> mat(n, vector<long long>(n,mx));

    for(int i=0;i<n;i++) mat[i][i]=0;
    while(e--)
    {
        long long u,v,c; cin>>u>>v>>c;
        mat[u][v] = min(mat[u][v], c);
    }

    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                long long &curcost = mat[i][j],
                netcost = mat[i][k]+mat[k][j];
                if(netcost<curcost) curcost = netcost;
            }
        }
    }

    long long t; cin>>t;
    while(t--)
    {
        int u,v; cin>>u>>v;
        if(mat[u][v]<mx) cout<<mat[u][v]<<endl;
        else cout<<"-1\n";
    }

    return 0;
}

/*
4 7
1 2 10
2 3 5
3 4 2
4 2 3
3 1 7
2 1 1
1 4 4
6
1 2
4 1
3 1
1 4
2 4
4 2
*/