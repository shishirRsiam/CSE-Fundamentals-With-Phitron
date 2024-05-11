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




void testcase()
{
    int n; cin>>n;
    vec a(n);
    loop(0,i,n) cin>>a[i];
    sort(bee(a));

    auto fun = [&](int mid)
    {
        int idx = 0, cnt = 1;
        for(int i = 0;i<n;i++)
        {
            if(a[i] - a[idx] > (2 * mid))
            {
                cnt++;
                idx = i;
            }
        }
        return cnt <= 3;
    };

    ll int i = 0, j = 1e9, ans = 0, mid;
    while(i<=j)
    {
        mid = i + (j - i) / 2;
        if(fun(mid))
        {
            ans = mid;
            j = mid-1;
        }
        else i = mid+1;
    }
    cout<<ans<<by
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 

        testcase();

    return 0;
}