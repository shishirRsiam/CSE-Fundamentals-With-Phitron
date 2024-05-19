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




bool testcase()
{
    int n; cin>>n;
    vec a(n);
    loop(0,i,n) cin>>a[i];

    ll ans = 0;
    loop(1,i,n)
    {
        if(a[i] < a[i-1])
        {
            ans += abs(a[i] - a[i-1]);
            a[i] = a[i-1];
        }
    }
    // print(a);
    cout<<ans<<by
    return true;
}

int main()
{
    code by shishirRsiam

    int t = 1; 
    while(t--) 

        testcase();

    return 0;
}