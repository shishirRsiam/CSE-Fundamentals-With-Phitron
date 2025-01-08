#include<bits/stdc++.h>
#define ll long long 
#define vec vector<ll> 
#define str string 
using namespace std;

int main()
{
    str a, b; cin>>a>>b;
    int n = a.size(), m = b.size();
    int dp[n+1][m+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(!i or !j) dp[i][j] = 0;
        }
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i-1]==b[j-1])
            {
                dp[i][j] = dp[i-1][j-1] +1;
            }
            else dp[i][j] = 0;
        }
    }

    int mx = 0, ci, cj;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(dp[i][j]>mx)
            {
                mx = dp[i][j];
                ci = i, cj = j;
            }
        }
    }

    str ans;
    while(ci != 0 and cj != 0)
    {
        if(a[ci-1] == b[cj-1])
        {
            ans += a[ci-1];
            ci--, cj--;
        }
        else break;
    }
    reverse(ans.begin(), ans.end());
    cout<<ans<<endl;

    return 0;
}