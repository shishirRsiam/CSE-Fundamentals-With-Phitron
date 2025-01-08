#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int sz = 1e5;

vector<pair<ll,ll>>mat[sz];
ll dis[sz];

class cmp
{
    public:
    bool operator()(pair<ll,ll>&a, pair<ll,ll>&b)
    {
        return a.second > b.second;
    }
};

void dijkstra_(int s)
{
    dis[s]=0;

    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,cmp> pq;
    pq.push({s,0});

    while(!pq.empty())
    {
        auto p = pq.top(); pq.pop();
        ll node = p.first, cost = p.second;
        for(auto c:mat[node])
        {
            ll cnode = c.first, ccost = c.second;
            ll netcost = cost + ccost, &curcost = dis[cnode];
            if(netcost<curcost)
            {
                curcost=netcost;
                pq.push({cnode,curcost});
            }
        }
    }

}

int main()
{
    int n,e; cin>>n>>e; n++;
    while(e--)
    {
        ll u,v,c; cin>>u>>v>>c;
        mat[u].push_back({v,c});
    }

    for(int i=0;i<n;i++) dis[i]=LONG_MAX;

    int s; cin>>s;
    dijkstra_(s);

    int t; cin>>t;
    while(t--)
    {
        ll a,b; cin>>a>>b;
        if(dis[a]<=b) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}