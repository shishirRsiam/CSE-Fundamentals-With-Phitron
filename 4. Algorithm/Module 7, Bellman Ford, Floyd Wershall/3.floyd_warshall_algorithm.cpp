#include<bits/stdc++.h>
using namespace std;

void print_(vector<vector<long long>> &mat)
{
    int n = mat.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<(mat[i][j]==INT_MAX ? "INF":to_string(mat[i][j]))<<" ";
        cout<<endl;
    }
}

bool cycle_ditect(vector<vector<long long>> &mat)
{
    int n = mat.size();
    for(int i=0;i<n;i++)
        if(mat[i][i]<0) return true;

    return false;
}

int main()
{
    int n,e; cin>>n>>e;
    vector<vector<long long>> mat(n,vector<long long>(n));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            mat[i][j]=INT_MAX;
            if(i==j) mat[i][j]=0;
        }
    }

    while(e--)
    {
        int u,v,c; cin>>u>>v>>c;
        mat[u][v]=c;
    }

    // before print
    print_(mat), cout<<endl;

    // floys warshall algorithm
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                long long &curcost = mat[i][j],
                netcost = mat[i][k]+mat[k][j];
                if(netcost < curcost) curcost = netcost;
            }
        }
    }

    
    if(cycle_ditect(mat)) cout << "Cycle Detected!";
    else print_(mat);


    return 0;
}

/*
input: 
4 6
3 2 8
2 1 5
1 0 2
3 0 20
0 1 3
1 2 2
output: 
0 3 INF INF 
2 0 2 INF 
INF 5 0 INF 
20 INF 8 0 

0 3 5 INF 
2 0 2 INF 
7 5 0 INF 
15 13 8 0 
*/

/*
input: 
3 3
0 1 -5
1 2 3
2 0 -1
output: 
0 -5 INF 
INF 0 3 
-1 INF 0 

-3 -8 -5 
2 -3 0 
-4 -9 -6
*/