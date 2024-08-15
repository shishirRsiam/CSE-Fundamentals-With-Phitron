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
#define pyn cout<<"Yes\n":cout<<"No\n"
#define shishirRsiam cin.tie(NULL);
#define code ios::sync_with_stdio(false);
#define loop(s,i,n) for(int i=s;i<n;i++)
#define print(x) for(auto v:x) cout<<v<<" ";
using namespace std;

vector<int>opps(ll n)
{
    vector<int>fact;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            fact.pb(i);
            while(n%i==0) n /= i;
        }
    }

    if(n > 1) fact.pb(n);
    return fact;
}


bool testcase()
{
    ll a, b; cin>>a>>b;

    vector<int> oho = opps(b);

    for(auto val:oho)
        if(a%val) return false;
    return true;
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 

        testcase() ? pyn;

    return 0;
}