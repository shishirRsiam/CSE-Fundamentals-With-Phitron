#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "\n";
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb push_back
#define bee(x) x.rbegin(), x.rend()
#define pyn cout<<"YES\n":cout<<"NO\n"
#define shishirRsiam cin.tie(NULL);
#define code ios::sync_with_stdio(false);
#define loop(s,i,n) for(int i=s;i<n;i++)
#define print(x) for(auto v:x) cout<<v<<" ";
using namespace std;




void testcase()
{
    int n,k; cin>>n>>k;
    vec neg, pos;
    loop(0,i,n)
    {
        int x; cin>>x;
        if(x<0) neg.pb(abs(x));
        else pos.pb(x);
    }

    sort(bee(neg));
    sort(bee(pos));

    long long ans = 0;

    int x = neg.size();
    for(int i=0;i<x;i+=k)
        ans += (neg[i] + neg[i]);
    x = pos.size();
    for(int i=0;i<x;i+=k)
        ans += (pos[i] + pos[i]);

    ll rem = 0;
    if(neg.size()) rem = max(rem, neg[0]);
    if(pos.size()) rem = max(rem, pos[0]);

    cout<<ans - rem<<"\n";
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 

        testcase();

    return 0;
}