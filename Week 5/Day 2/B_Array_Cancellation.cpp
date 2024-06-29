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
    int n; cin>>n;
    vec a(n);
    loop(0,i,n) cin>>a[i];

    ll pos = 0, ans = 0;
    for(auto &v:a)
    {
        if(v<0)
        {
            if(pos >= abs(v)) pos += v, v = 0;
            else v += pos, pos = 0;
        }
        else pos += v;
    }
    for(int v:a)
        if(v<0) ans += v;
    cout<<abs(ans)<<"\n";
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 
        testcase();

    return 0;
}