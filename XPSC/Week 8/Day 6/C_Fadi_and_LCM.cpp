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

ll lcm(ll a, ll b)
{
    return ((a / (__gcd(a, b)) * b));
}

int main()
{
    code by shishirRsiam

    ll n, ans; cin>>n;

    for(ll i=1;i*i<=n;i++)
        if(n%i==0 and lcm(i, n/i)==n) ans = i;

    cout<<ans<<" "<<n/ans<<by;

    return 0;
}