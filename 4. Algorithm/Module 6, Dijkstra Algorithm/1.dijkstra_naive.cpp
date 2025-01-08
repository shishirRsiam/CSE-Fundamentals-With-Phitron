#include<bits/stdc++.h>
using namespace std;

const int N = 1024;
vector<pair<int,int>> mat[N];
int dis[N];

void dijstra_(int s)
{
    queue<pair<int,int>>q; q.push({s,0});
    dis[s]=0;

    while(!q.empty())
    {
        auto p = q.front(); q.pop();
        int node = p.first, cost = p.second;
        for(auto child:mat[node])
        {
            int cNode = child.first, cCost = child.second;
            int netCost = cost + cCost;
            if(netCost < dis[cNode])
            {
                dis[cNode] = netCost;
                q.push({cNode,netCost});
            }
        }
    }
}

int main()
{
    int n,e; cin>>n>>e;
    while(e--)
    {
        int a,b,c; cin>>a>>b>>c;
        mat[a].push_back({b,c});
        mat[b].push_back({a,c});
    }
    for(int i=0;i<n;i++) dis[i] = INT_MAX;
    dijstra_(0);
    for(int i=0;i<n;i++) cout<<i<<"-> "<<dis[i]<<endl;
    return 0;
}

// time complexibity O(V*E);
/*
input: 
5 8
0 1 10
0 2 7
0 3 4
1 4 3
2 4 5
2 1 1
3 4 5
3 2 1
*/