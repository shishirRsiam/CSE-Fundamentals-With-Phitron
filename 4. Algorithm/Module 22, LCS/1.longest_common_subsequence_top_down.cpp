#include<bits/stdc++.h>
#define ll long long 
#define vec vector<ll> 
#define str string 
using namespace std;

int dp[1024][1024];

int LCS(str &a, int n, str &b, int m)
{
    if(!n or !m) return 0;
    if(dp[n][m] != -1) return dp[n][m];
    if(a[n-1]==b[m-1]) return dp[n][m] = LCS(a, n-1, b, m-1) + 1;
    else 
    {
        int one = LCS(a, n-1, b, m);
        int two = LCS(a, n, b, m-1);
        return dp[n][m] = max(one, two);
    }
}

int main()
{
    str a, b; cin>>a>>b;
    memset(dp, -1, sizeof(dp));
    cout<<LCS(a, a.size(), b, b.size())<<endl;
    return 0;
}

/*

abcdfgr
acfdgr

*/