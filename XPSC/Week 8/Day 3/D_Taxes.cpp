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




bool isprime(ll n)
{
    for(int i=2;i*i<=n;i++)
        if(n%i==0) return false;
    return n != 1;
}

int main()
{
    code by shishirRsiam

    ll n; cin>>n;

    int ans = 0;
    if(isprime(n)) ans = 1;
    else if(n%2==0) ans = 2;
    else 
    {
        if(isprime(n-2)) ans = 2;
        else ans = 3;
    }
    cout<<ans<<"\n";
    return 0;
}