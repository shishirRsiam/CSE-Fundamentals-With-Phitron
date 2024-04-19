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
    str a, b; cin>>a>>b;
    int n = a.size(), m = b.size();
    vector<vector<int>>dp(n+1, vector<int>(m+1));
    int mx = 0, lastIdx = -1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i-1] == b[j-1]) dp[i][j] = dp[i-1][j-1]+1;
            else dp[i][j] = 0;
            if(dp[i][j]>mx)
            {
                mx = dp[i][j];
                lastIdx = j;
            }
        }
    }
    // cout<<mx<<"\n";
    // if(mx > 0) cout << b.substr(lastIdx - mx, mx) << "\n";
    cout<<(a.size()-mx) + (b.size()-mx)<<"\n";
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 
        testcase();

    return 0;
}