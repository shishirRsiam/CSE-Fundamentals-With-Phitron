#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int parent[N];
int groupSize[N];

class edge
{
    public:
    int u,v,c;
    edge(int x,int y, int z)
    {
        u = x, v = y, c = z;
    }
};

bool cmp (edge&a, edge&b)
{
    return a.c < b.c;
}

int find_leader(int node)
{
    if(parent[node]==-1) return node;
    return parent[node] = find_leader(parent[node]);
}

void dsu_by_size(int nodeA, int nodeB)
{
    nodeA = find_leader(nodeA), nodeB = find_leader(nodeB);
    if(nodeA != nodeB)
    {
        if(groupSize[nodeA] > groupSize[nodeB])
        {
            parent[nodeB] = nodeA;
            groupSize[nodeA] += groupSize[nodeB];
        }
        else 
        {
            parent[nodeA] = nodeB;
            groupSize[nodeB] += groupSize[nodeA];
        }
    }
}

int main()
{
    int n,e; cin>>n>>e;
    vector<edge>ed;
    while(e--)
    {
        int a,b,c; cin>>a>>b>>c;
        ed.push_back(edge(a,b,c));
    }
    sort(ed.begin(), ed.end(), cmp);
    for(int i=0;i<n;i++)
    {
        parent[i]=-1;
        groupSize[i]=1;
    }

    int cost = 0;
    for(auto x:ed)
    {
        int leaderA = find_leader(x.u), leaderB = find_leader(x.v);
        if(leaderA != leaderB)
        {
            cost += x.c;
            dsu_by_size(x.u, x.v);
        }
    }
    cout<<cost<<endl;
    return 0;
}