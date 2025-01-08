#include<bits/stdc++.h>
using namespace std;

const int N = 1024;
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
    pq.push({s,0});
    dis[s]=0;

    while(!pq.empty())
    {
        auto p = pq.top(); pq.pop();
        int node = p.first, cost = p.second;
        for(auto child:mat[node])
        {
            int cNode = child.first, cCost = child.second;
            int netCost = cost + cCost;
            if(netCost < dis[cNode])
            {
                dis[cNode] = netCost;
                pq.push({cNode,netCost});
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
    dijkstra_(0);
    for(int i=0;i<n;i++) cout<<i<<"-> "<<dis[i]<<endl;
    return 0;
}

// time complexibity O(V+E logV)
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