#include<bits/stdc++.h>
#define str string
#define ll long long 
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define loop(s,i,n) for(ll i=s;i<n;i++)
using namespace std;

const ll N = 2e5+5;
vector<ll> adj[N];
ll parentcount[N];

void dfs(ll source, ll parent)
{
    // cout<<source<<" ";
    if(adj[source].size()==1 and source != 1)
    {
        parentcount[source] = 1;
        return;
    }
    for(ll child:adj[source])
    {
        if(child != parent)
        {
            dfs(child, source);
            parentcount[source] += parentcount[child];
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        ll e = n-1;
        loop(0,i,n+2) adj[i].clear(), parentcount[i] = 0;
        while(e--)
        {
            ll a, b; cin>>a>>b;
            adj[a].pb(b);
            adj[b].pb(a);
        }

        dfs(1, INT_MIN);

        ll k; cin>>k;
        while(k--)
        {
            ll a,b; cin>>a>>b;
            cout<<parentcount[a]*parentcount[b]<<"\n";
        }
    }

    return 0;
}