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
#define pyn cout<<"YES\n":cout<<"NO\n"
#define loop(s,i,n) for(int i=s;i<n;i++)
#define code ios::sync_with_stdio(false);
#define shishirRsiam cin.tie(NULL);
using namespace std;


void testcase()
{
    int a,b,n; cin>>a>>b>>n;
    vec power(n);
    unordered_map<int,int>mp;
    loop(0,i,n) 
    {
        cin>>power[i];
        mp[power[i]]++;
    }
    // sort(bee(power), greater<ll>());

    ll ans = b;
    for(auto v:power)
    {
        if(v+1>=a) ans += a-1;
        else ans += v;
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