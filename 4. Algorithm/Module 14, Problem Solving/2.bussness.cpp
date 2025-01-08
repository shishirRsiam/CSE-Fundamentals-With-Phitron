#include<bits/stdc++.h>
using namespace std;

class edge
{
    public:
    int u,v,c;
    edge(int x, int y, int z)
    {
        u=x, v=y, c=z;
    }
};

bool cmp(edge a, edge b)
{
    return a.c < b.c;
}

const int N = 1e5+5;
int par[N];
int sz[N];

int find_(int a)
{
    if(par[a]==-1) return a;
    return par[a] = find_(par[a]);
}

void dsu_size(int a, int b)
{
    a = find_(a), b = find_(b);
    if(sz[a]>sz[b])
    {
        par[b]=a;
        sz[a]+=sz[b];
    }
    else 
    {
        par[a]=b;
        sz[b] += sz[a];
    }
}

int main()
{
    int n,e; cin>>n>>e;

    for(int i=0;i<n;i++)
    {
        par[i]=-1;
        sz[i]=1;
    }

    vector<edge>ed;
    while(e--)
    {
        int a,b,c; cin>>a>>b>>c;
        ed.push_back(edge(a,b,c));
    }
    sort(ed.begin(),ed.end(),cmp);

    int cost = 0;
    for(auto x:ed)
    {
        int leaderA = find_(x.u), leaderB = find_(x.c);

        if(leaderA != leaderB)
        {
            dsu_size(x.u, x.v);
            cost += x.c;
        }
    }

    cout<<cost<<endl;

    return 0;
}

/*
input: 6 10
0 1 5
0 2 6
0 3 8
0 4 6
0 5 10
3 5 2
5 1 4
1 2 3
2 4 8
4 3 6
*/