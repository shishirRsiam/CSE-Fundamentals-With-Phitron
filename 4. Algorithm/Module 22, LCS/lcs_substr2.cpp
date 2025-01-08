#include <bits/stdc++.h>
#define ll long long 
#define vec vector<ll> 
#define str string 

using namespace std;

int main()
{
    str a, b; 
    cin >> a >> b;
    int n = a.size(), m = b.size();
    int dp[n+1][m+1];

    // Initializing dp array
    memset(dp, 0, sizeof(dp));
    int mx = 0, ci = -1, cj = -1; // Initialize ci and cj to -1

    // Dynamic Programming to fill dp array and find maximum common substring
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(a[i-1] == b[j-1])
            {
                dp[i][j] = dp[i-1][j-1] + 1;
                if(dp[i][j] > mx)
                {
                    mx = dp[i][j];
                    ci = i, cj = j;
                }
            }
        }
    }

    // Constructing the longest common substring
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

    // Printing the longest common substring
    cout << ans << endl;

    return 0;
}
