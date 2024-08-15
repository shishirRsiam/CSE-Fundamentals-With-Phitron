#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "\n";
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
    vec one = a, zero = a;
    vec op(n);
    ll cnt = 0;
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==0) cnt++;
        op[i] = cnt;
    }

    ll ans = INT_MIN;
    cnt = 0;
    loop(0,i,n)
        if(a[i]) cnt += op[i];
    ans = max(ans, cnt);

    loop(0,i,n)
    {
        if(one[i]==0)
        {
            one[i] = 1;
            break;
        }
    }
    cnt = 0;
    for(int i=n-1;i>=0;i--)
    {
        if(one[i]==0) cnt++;
        op[i] = cnt;
    }

    cnt = 0;
    loop(0,i,n)
        if(one[i]) cnt += op[i];
    ans = max(ans, cnt);


    for(int i=n-1;i>=0;i--)
    {
        if(zero[i]==1) 
        {
            zero[i] = 0;
            break;
        }
    }

    cnt = 0;
    for(int i=n-1;i>=0;i--)
    {
        if(zero[i]==0) cnt++;
        op[i] = cnt;
    }

    cnt = 0;
    for(int i=n-1;i>=0;i--)
    {
        if(zero[i]==0) cnt++;
        op[i] = cnt;
    }
    cnt = 0;
    loop(0,i,n)
        if(zero[i]) cnt += op[i];
    ans = max(ans, cnt);

    // cout<<cnt<<" ";
    // print(a);
    // cout<<by;
    // print(one);
    // cout<<by;
    // print(zero);
    // cout<<by;



    cout<<ans<<by;
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 

        testcase();

    return 0;
}