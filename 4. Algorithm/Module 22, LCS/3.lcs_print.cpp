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
    memset(dp, 0, sizeof(dp));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i-1]==b[j-1]) dp[i][j] = dp[i-1][j-1] +1;
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    
    
    str ans;
    int i = n, j = m;
    while(i!=0 and j!=0)
    {
        if(a[i-1] == b[j-1])
        {
            ans += a[i-1];
            i--, j--;
        }
        else 
        {
            if(dp[i-1][j] > dp[i][j-1]) i--;
            else j--;
        }
    }
    reverse(ans.begin(), ans.end());
    cout<<ans<<endl;
    return 0;
}

/*
abcdfgr
acfdgr

abd
gbad
*/