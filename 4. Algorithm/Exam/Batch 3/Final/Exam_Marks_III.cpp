#include<bits/stdc++.h>
#define ll long long 
#define vec vector<ll> 
#define str string 
using namespace std;

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n, m; cin>>n>>m;
        vec a(n);
        for(ll i=0;i<n;i++) cin>>a[i];

        ll need = 1000 - m;

        ll dp[n+1][need+1];

        dp[0][0] = 0;
        for(ll i=1;i<=need;i++) dp[0][i] = INT_MAX;

        for(ll i=1;i<=n;i++)
        {
            for(ll j=0;j<=need;j++)
            {
                if(a[i-1] <= j)
                {
                    ll pick = dp[i][j-a[i-1]] + 1;
                    ll not_pick = dp[i-1][j];
                    dp[i][j] = min(pick , not_pick);
                }
                else dp[i][j] = dp[i-1][j];
            }
        }
        dp[n][need] == INT_MAX ? cout<<"-1\n" : cout<<dp[n][need]<<endl;
    }
    return 0;
}