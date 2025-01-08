#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "\n";
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb push_back
#define bee(x) x.begin(), x.end()
#define pyn cout<<"YES\n":cout<<"NO\n"
#define shishirRsiam cin.tie(NULL);
#define code ios::sync_with_stdio(false);
#define loop(s,i,n) for(int i=s;i<n;i++)
#define print(x) for(auto v:x) cout<<v<<" ";
using namespace std;



#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;



bool testcase()
{
    int n; cin>>n;
    vector<pi>a;
    loop(0,i,n)
    {
        int x, y; cin>>x>>y;
        a.pb({x, y});
    }

    sort(bee(a));

    ll ans = 0;
    pbds<ll>pbds;
    for(auto [a, b]:a)
    {
        ans += pbds.size() - pbds.order_of_key(b);
        pbds.insert(b);
    }

    cout<<ans<<by;

    return true;
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 

        testcase();

    return 0;
}