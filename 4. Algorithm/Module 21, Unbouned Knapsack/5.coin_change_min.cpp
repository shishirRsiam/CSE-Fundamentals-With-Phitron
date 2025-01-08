#include<bits/stdc++.h>
#define ll long long 
#define vec vector<ll> 
#define str string 
using namespace std;



int main()
{
    int n, s; cin>>n>>s;
    vec val(n);
    for(int i=0;i<n;i++) cin>>val[i];

    int dp[n+1][s+1];

    for(int i=0;i<=s;i++) dp[0][i] = INT_MAX-1;
    dp[0][0] = 0;

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=s;j++)
        {
            if(val[i-1]<=j)
            {
                int pick = dp[i][j-val[i-1]] + 1;
                int not_pick = dp[i-1][j];
                dp[i][j] = min(pick, not_pick);
            }
            else dp[i][j] = dp[i-1][j];
        }
    }

    cout<<dp[n][s]<<endl;

    return 0;
}