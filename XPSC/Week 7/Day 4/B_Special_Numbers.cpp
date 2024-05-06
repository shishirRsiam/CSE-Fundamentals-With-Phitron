#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "\n";
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define pyn cout<<"YES\n":cout<<"NO\n"
#define shishirRsiam cin.tie(NULL);
#define code ios::sync_with_stdio(false);
#define loop(s,i,n) for(int i=s;i<n;i++)
#define print(x) for(auto v:x) cout<<v<<" ";
using namespace std;



const int mod = 1e9+7;

ll power(ll n, ll k)
{
    ll res = 1;
    while(k)
    {
        if(k%2==1)
        {
            res = (res * n) % mod;
            k--;
        }
        else 
        {
            n = (n * n) % mod;
            k /= 2;
        }
    }
    return res % mod;
}


void testcase()
{
    int n,k; cin>>n>>k;

    vec s;

    while(k)
    {
        s.pb(k%2);
        k /= 2;
    }
    // cout<<s<<"\n";
    // print(s);
    // cout<<"\n";

    k = s.size();
    ll ans = 0;
    loop(0,i,k)
    {
        if(s[i])
        {
            ans += power(n, i);
            ans %= mod;
        }
    }

    cout<<ans<<"\n";

}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 

        testcase();

    return 0;
}