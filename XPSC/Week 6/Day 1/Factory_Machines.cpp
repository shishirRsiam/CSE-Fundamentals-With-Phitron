#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "";
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

bool isok(vec &a, ll t, ll sec)
{
    ll cnt = 0;
    for(auto &v:a)
    {
        cnt += (sec / v);
        if(cnt >= t) return true;
    }
    return false;
}

int main()
{
    code by shishirRsiam

    ll n,t; cin>>n>>t;
    vec a(n);
    loop(0,i,n) cin>>a[i];

    ll i = 1, j = 1e18, ans = 0, mid;
    while(i<=j)
    {
        mid = i+(j-i)/2;
        if(isok(a, t, mid))
        {
            ans = mid;
            j = mid-1;
        }
        else i = mid+1;
    }
    cout<<ans<<"\n";
    return 0;
}