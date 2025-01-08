#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "nothing";
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define beer(x) x.rbegin(), x.rend()
#define pyn cout<<"YES\n":cout<<"NO\n"
#define shishirRsiam cin.tie(NULL);
#define code ios::sync_with_stdio(false);
#define loop(s,i,n) for(int i=s;i<n;i++)
#define print(x) for(auto v:x) cout<<v<<" ";
using namespace std;




void testcase()
{
    int n,m; cin>>n>>m;
    vec a(n);
    loop(0,i,n) cin>>a[i];
    sort(beer(a));

    vec pref;
    ll sum = 0;
    pref.pb(sum);
    for(auto &v:a)
        sum += v, pref.pb(sum);

    while(m--)
    {
        ll x; cin>>x;
        auto it = lower_bound(bee(pref), x);
        if(it == pref.end()) cout<<"-1\n";
        else cout<<(it - pref.begin())<<"\n";
    }
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 

        testcase();

    return 0;
}