#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi pair<ll,ll>

const ll N = 1e5+5;
vector<pi>mat[N];
ll dis[N];
ll par[N];

class cmp
{
    public:
    bool operator()(pi a, pi b)
    {
        return a.second > b.second;
    }
};

void dijstra_(ll s)
{
    priority_queue<pi,vector<pi>,cmp>q;
    dis[s]=0;
    q.push({s,0});

    while(!q.empty())
    {
        pi p = q.top(); q.pop();
        ll node = p.first, cost = p.second;
        for(pi c:mat[node])
        {
            ll cnode = c.first, ccost = c.second;

            if(cost + ccost < dis[cnode])
            {
                dis[cnode] = cost + ccost;
                q.push({cnode, cost + ccost});
                par[cnode]=node;
            }
        }
    }
}

int main()
{
    ll n,e; cin>>n>>e;
    while(e--)
    {
        ll a,b,c; cin>>a>>b>>c;
        mat[a].push_back({b,c});
        mat[b].push_back({a,c});
    }

    for(ll i=1;i<=n;i++) dis[i]=1e18, par[i]=-1;

    dijstra_(1);

    if(par[n]==-1) cout<<"-1\n";
    else 
    {
        vector<ll>path;
        ll x = n;
        while(x != -1)
        {
            path.push_back(x);
            x = par[x];
        }
        reverse(path.begin(),path.end());
        for(int v:path) cout<<v<<" ";
    }

    return 0;
}