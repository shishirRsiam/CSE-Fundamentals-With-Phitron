#include<bits/stdc++.h>
using namespace std;

class edge 
{
    public:
    int u,v,c;
    edge(int x,int y, int z)
    {
        u=x, v=y, c=z;
    }
};

int n, e;
const int N = 1e5+5;
vector<edge>ed;
int dis[N];

void bellmarn_ford_()
{
    for(int i=0;i<n-1;i++)
    {
        for(auto x:ed)
        {
            int netcost = dis[x.u]+x.c;
            if(dis[x.u] < INT_MAX and netcost < dis[x.v])
                dis[x.v] = netcost;
        }
    }
}

bool bellmarn_ford_cycle_()
{
    for(auto x:ed)
    {
        int netcost = dis[x.u]+x.c;
        if(dis[x.u] < INT_MAX and netcost < dis[x.v]) return true;
    }
    return false;
}

int main()
{
    cin>>n>>e;
    while(e--)
    {
        int u,v,c; cin>>u>>v>>c;
        ed.push_back(edge(u,v,c));
    }

    for(int i=0;i<N;i++) dis[i]=INT_MAX;

    int s = 0; // source
    dis[s]=0;
    bellmarn_ford_();

    if(bellmarn_ford_cycle_()) cout<<"Cycle Ditect!\n";
    else for(int i=0;i<n;i++) cout<<i<<" -> "<<dis[i]<<endl;

    return 0;
}

/*
input: 
4 4
1 3 -3
0 3 5
2 1 1
0 2 -2
output: 
0 -> 0
1 -> -1
2 -> -2
3 -> -4
*/

/*
input: 
3 3
0 1 -1
1 2 2
2 0 -3
output: Cycle Ditect!
*/