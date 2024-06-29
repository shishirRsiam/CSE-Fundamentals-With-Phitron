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
#define loop(s,i,n) for(int i=s;i<n;i++)
#define code ios::sync_with_stdio(false);
#define shishirRsiam cin.tie(NULL);
using namespace std;



void testcase()
{
    ll n; cin>>n;
    priority_queue<ll>pq;
    loop(0,i,n)
    {
        ll a; cin>>a;
        pq.push(a);
    }

    ll ans = 1;
    ll xorr = pq.top(); pq.pop();
    while(!pq.empty())
    {
        if(xorr >= pq.top()) xorr ^= pq.top();
        else ans++, xorr = pq.top();
        pq.pop();
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