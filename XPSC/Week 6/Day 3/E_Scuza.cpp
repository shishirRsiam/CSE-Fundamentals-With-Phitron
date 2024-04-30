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




void testcase()
{
    int n,q; cin>>n>>q;
    vec a(n+1);
    a[0] = 0;
    vec pref(n+2, 0);
    loop(1,i,n+1) 
    {
        cin>>a[i];
        pref[i] = (pref[i-1] + a[i]);
    }

    vector<pi>x;
    loop(0,i,q)
    {
        ll v; cin>>v;
        x.push_back({v, i});
    }
    sort(bee(x));

    int idx = 0;
    vec ans(q);
    loop(0,i,q)
    {
        while(true)
        {
            if(idx == n or a[idx+1] > x[i].first) break;
            idx++;
        } 
        ans[x[i].second] = pref[idx];
    }

    print(ans);
    cout<<"\n";
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 

        testcase();

    return 0;
}