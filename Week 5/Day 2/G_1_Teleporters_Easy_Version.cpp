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
    int n,coin; cin>>n>>coin;
    priority_queue<ll,vec,greater<ll>>pq;
    loop(1,i,n+1)
    {
        ll x; cin>>x;
        pq.push(x+i);
    }
    
    int ans = 0;
    while(!pq.empty())
    {
        coin -= pq.top(); pq.pop();
        if(coin<0) break;
        ans++;
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