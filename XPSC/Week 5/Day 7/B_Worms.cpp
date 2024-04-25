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
    vec a;
    a.pb(0);
    int val = 0;
    loop(0,i,n)
    {
        int x; cin>>x;
        val += x;
        a.pb(val);
    }
    int q; cin>>q;
    while(q--)
    {
        int x; cin>>x;
        auto it = lower_bound(bee(a), x);
        cout<<it - a.begin()<<"\n";
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