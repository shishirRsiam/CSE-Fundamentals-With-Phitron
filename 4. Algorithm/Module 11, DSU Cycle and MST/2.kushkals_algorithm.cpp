#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int par[N];
int grpSize[N];
int lvl[N];

class Edge
{
    public:
    int u,v,c;
    Edge(int x,int y, int z)
    {
        u=x, v=y, c=z;
    }
};

int fnd_(int a)
{
    if(par[a]==-1) return a;
    return par[a] = fnd_(par[a]);
}

void union_by_size(int a, int b)
{
    a = fnd_(a), b = fnd_(b);
    if(grpSize[a]>grpSize[b])
    {
        par[b]=a;
        grpSize[a] += grpSize[b];
    }
    else 
    {
        par[a]=b;
        grpSize[b] += grpSize[a];
    }
}

void union_by_level(int a, int b)
{
    a = fnd_(a), b = fnd_(b);
    if(lvl[a]>lvl[b]) par[b]=a;
    else if(lvl[b]>lvl[a]) par[a]=b;
    else 
    {
        par[a]=b;
        lvl[b]++;
    }
}

bool cmp(Edge&a, Edge&b)
{
    return a.c < b.c;
}

int main()
{
    int n,e; cin>>n>>e; n++;
    for(int i=0;i<n;i++)
    {
        par[i]=-1;
        grpSize[i]=1;
        lvl[i]=0;
    }
    
    vector<Edge>edg;
    while(e--) // vector push edge
    {
        int a,b,c; cin>>a>>b>>c;
        edg.push_back(Edge(a,b,c));
    }

    sort(edg.begin(),edg.end(),cmp);
    int sortCost = 0;
    int cnt = 1;
    for(auto x:edg)
    {
        int a = fnd_(x.u), b = fnd_(x.v);
        if(a != b)
        {
            sortCost += x.c;
            cnt++;
            union_by_size(x.u, x.v);
        }
    }
    if(cnt != n) cout<<"IMPOSSIBLE";
    else cout<<sortCost<<endl;
    return 0;
}

/*
input: 5 7
0 1 2
0 2 3
0 3 3
3 4 6
2 4 4
2 1 7 
1 4 5
*/
/*
valid: 6 7
2 1 2
1 6 4
3 4 8
3 5 3
2 3 1
2 4 2
3 6 2
invalid: 6 4
2 1 2
1 6 4
3 4 8
3 5 3

*/