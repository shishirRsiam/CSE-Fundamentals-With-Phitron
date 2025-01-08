#include<bits/stdc++.h>
#define str string 
#define ll long long 
#define vec vector<ll> 
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define loop(s,i,n) for(ll i=s;i<n;i++)
using namespace std;

void fun()
{
    ll n,k,temp; cin>>n>>k>>temp;
    ll ans = 0;
    vec nums;
    loop(0,i,n)
    {
        ll a; cin>>a;
        if(a<=temp) nums.pb(a);
        else
        {
            ll size = nums.size();
            if(size>=k)
            {
                ll ok = size-k+1;
                ans += ok*(ok+1)/2;
            }
            nums.clear();
        }
    }
    if(!nums.empty()) 
    {
        ll size = nums.size();
        if(size>=k)
        {
            ll ok = size-k+1;
            ans += ok*(ok+1)/2;
        }
    }
    cout<<ans<<"\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin>>t;
    while(t--)
        fun();

    return 0;
}