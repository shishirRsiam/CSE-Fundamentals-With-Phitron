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

ll getbit(ll n, ll k)
{
    return (n & (1<<k)) != 0;
}

ll fun(ll n)
{
    ll lastone = 0;
    for(ll i=0;i<32;i++)
    {
        if(getbit(n, i)) lastone = i;
    }
    return lastone;
}

void testcase()
{
    ll n; cin>>n;
    unordered_map<ll,ll>mp;
    loop(0,i,n)
    {
        ll num; cin>>num;
        mp[fun(num)]++;
    }

    ll ans = 0;
    for(auto x:mp)
    {
        ll num = x.second;
        ans += (num*(num-1)/2);
    }
    cout<<ans<<"\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin>>t;
    while(t--) testcase();

    return 0;
}