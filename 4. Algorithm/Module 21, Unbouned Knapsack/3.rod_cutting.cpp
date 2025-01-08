#include<bits/stdc++.h>
#define ll long long 
#define vec vector<ll> 
#define str string 
using namespace std;



int main()
{
    int n; cin>>n;
    vec val(n), wat(n);
    for(int i=0;i<n;i++) cin>>val[i], wat[i] = i+1;

    int dp[n+1][n+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(!i or !j) dp[i][j] = 0;
        }
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(wat[i-1]<=j)
            {
                int pick = dp[i][j-wat[i-1]] + val[i-1];
                int not_pick = dp[i-1][j];
                dp[i][j] = max(pick, not_pick);
            }
            else dp[i][j] = dp[i-1][j];
        }
    }
    cout<<dp[n][n]<<endl;
    return 0;
}

/*
8
2 4 4 5 8 14 12 9
*/