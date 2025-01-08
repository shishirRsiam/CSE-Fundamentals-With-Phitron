#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int par[N];
int level[N];
int groupsize[N];

void dsu_inisialize(int n)
{
    for(int i=0;i<n;i++) 
        par[i] = -1,
        level[i] = 0,
        groupsize[i] = 1;
}

int dsu_find(int node)
{
    if(par[node]==-1) return node;
    int leader = dsu_find(par[node]);
    par[node] = leader;
    return leader;
}

void dsu_union(int nodeA, int nodeB)
{
    int leaderA = dsu_find(nodeA);
    int leaderB = dsu_find(nodeB);
    par[leaderA] = leaderB;
}

void dsu_union_by_size(int nodeA, int nodeB)
{
    int leaderA = dsu_find(nodeA);
    int leaderB = dsu_find(nodeB);

    if(groupsize[leaderA] > groupsize[leaderB])
    {
        par[leaderB]=leaderA;
        groupsize[leaderA] += groupsize[leaderB];
    }
    else 
    {
        par[leaderA] = leaderB;
        groupsize[leaderB] += groupsize[leaderA];
    }
}

void dsu_union_by_level(int nodeA, int nodeB)
{
    int leaderA = dsu_find(nodeA);
    int leaderB = dsu_find(nodeB);

    if(level[leaderA] > level[leaderB])
        par[leaderB]=leaderA;
    
    else if(level[leaderB] > level[leaderA])
        par[leaderA] = leaderB;
    
    else
    {
        par[leaderA] = leaderB;
        level[leaderB]++;
    }
}

int main()
{
    dsu_inisialize(7);
    
    dsu_union_by_level(1,2);
    dsu_union_by_level(2,3);
    dsu_union_by_level(4,5);
    dsu_union_by_level(5,6);
    dsu_union_by_level(1,4);

    cout<<dsu_find(1)<<endl;
    cout<<dsu_find(4)<<endl;
    return 0;
}