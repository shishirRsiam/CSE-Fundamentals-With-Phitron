#include <bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define vec vector<ll>
#define pb push_back
#define pyn          \
    cout << "YES\n"; \
    else cout << "NO\n";
#define shishirRsiam cin.tie(NULL);
#define code ios::sync_with_stdio(false);

using namespace std;

void testcase()
{
    ll a, b;
    cin >> a >> b;
    ll i = 1, j = LLONG_MAX, ans = 0;
    while (i <= j)
    {
        ll mid = (i+j) / 2;
        ll x = mid - (mid / a);
        if (x > b)
            j = mid - 1;
        else if (x < b)
            i = mid + 1;
        else
            ans = mid, j = mid - 1;
        cout<<x<<" "<<mid<<" "<<ans<<"\n";
    }
    // cout << ans << "\n";
}

int main()
{
    code
        shishirRsiam

        int t;
    cin >> t;
    while (t--)
        testcase();

    return 0;
}
