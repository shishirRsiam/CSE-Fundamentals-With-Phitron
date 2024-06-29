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


bool isOk(vec &a, ll mid, ll k)
{
    ll operation = 0, n = a.size();
    for(int i=(n/2);i<n;i++)
        operation += (a[i] < mid ? (mid - a[i]) : 0);
    return operation <= k;
}

int main()
{
    code by shishirRsiam

    ll n,k; cin>>n>>k;
    vec a(n);
    loop(0,i,n) cin>>a[i];
    sort(bee(a));

    ll i = 1, j = 2e9, ans = 0;
    while(i<=j)
    {
        ll mid = i+(j-i) / 2;
        if(isOk(a, mid, k))
        {
            ans = mid;
            i = mid+1;
        }
        else j = mid-1;
    }
    cout<<ans<<"\n";
    return 0;
}