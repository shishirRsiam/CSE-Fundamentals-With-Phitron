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
#define shishirRsiam cin.tie(NULL);
#define code ios::sync_with_stdio(false);
#define loop(s,i,n) for(int i=s;i<n;i++)
#define print(x) for(auto v:x) cout<<v<<" ";
using namespace std;




void testcase()
{
    int n; cin>>n;
    vec a(n);
    loop(0,i,n) cin>>a[i];
    sort(bee(a));

    int q; cin>>q;
    while(q--)
    {
        int x,y; cin>>x>>y;
        y++;
        auto it = lower_bound(bee(a), x);
        auto it2 = lower_bound(bee(a), y);
        cout<<(it2 - a.begin()) - (it - a.begin())<<" ";
    }
}

int main()
{
    code by shishirRsiam

    // int t; cin>>t;
    // while(t--) 

        testcase();

    return 0;
}