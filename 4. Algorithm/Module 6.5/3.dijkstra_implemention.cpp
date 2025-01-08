#include<bits/stdc++.h>
using namespace std;
const int N =1e5+5;
vector<pair<int,int>>mat[N];
int dis[N];

class cmp
{
    public:
    bool operator()(pair<int,int>&a, pair<int,int>&b)
    {
        return a.second > b.second;
    }
};

void dijkstra_(int s)
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,cmp> pq;
    pq.push({s,0}); dis[s]=0;

    while(!pq.empty())
    {
        auto x = pq.top(); pq.pop();
        int node = x.first, cost = x.second;
        for(auto c:mat[node])
        {
            int cnode = c.first, ccost = c.second;
            int netcost = cost + ccost;
            if(netcost < dis[cnode])
            {
                dis[cnode] = netcost;
                pq.push({cnode,netcost});
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
    for(int i=0;i<N;i++) dis[i] = INT_MAX;
    dijkstra_(2);

    for(int i=0;i<n;i++)
        cout<<dis[i]<<" ";

    return 0;
}