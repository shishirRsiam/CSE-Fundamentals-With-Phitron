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


int main()
{
    code by shishirRsiam

    ll n,k; cin>>n>>k;
    vec a(n);
    loop(0,i,n) cin>>a[i];

    ll i = 0, j = 0, sum = 0, ans = 0;
    while(j<n)
    {
        sum += a[j++];
        while(sum > k) sum -= a[i++];
        if(sum == k) ans++;
    }
    cout<<ans<<by;
    return 0;
}