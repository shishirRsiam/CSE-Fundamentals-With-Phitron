#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 1e5+5;
ll par[N];
ll grpSize[N];
ll lvl[N];

class Edge
{
    public:
    ll u,v,c;
    Edge(ll x,ll y, ll z)
    {
        u=x, v=y, c=z;
    }
};

ll fnd_(ll a)
{
    if(par[a]==-1) return a;
    return par[a] = fnd_(par[a]);
}

void union_by_size(ll a,ll b)
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
    ll n,e; cin>>n>>e;
    for(ll i=1;i<=n;i++)
    {
        par[i]=-1;
        grpSize[i]=1;
        lvl[i]=0;
    }
    
    vector<Edge>edg;
    while(e--)
    {
        ll a,b,c; cin>>a>>b>>c;
        edg.push_back(Edge(a,b,c));
    }

    sort(edg.begin(),edg.end(),cmp);
    ll sortCost = 0;
    ll cnt = 0;
    int remove = 0;
    for(auto x:edg)
    {
        ll a = fnd_(x.u), b = fnd_(x.v);
        if(a != b)
        {
            sortCost += x.c;
            cnt++;
            union_by_level(x.u, x.v);
        }
        else remove++;
    }
    if(cnt == n-1) cout<<remove<<" "<<sortCost<<endl;
    else cout<<"Not Possible\n";
    return 0;
}
