#include <bits/stdc++.h>
#define str string
#define ll long long
#define by "\n";
#define pi pair<ll, ll>
#define vec vector<ll>
#define py cout << "YES\n"
#define pn cout << "NO\n"
#define pb push_back
#define bee(x) x.begin(), x.end()
#define pyn cout << "YES\n" : cout << "NO\n"
#define shishirRsiam cin.tie(NULL);
#define code ios::sync_with_stdio(false);
#define loop(s, i, n) for (int i = s; i < n; i++)
using namespace std;

void testcase()
{
    ll n, k, q; cin >> n >> k >> q;
    vector<ll> a(k + 1), b(k + 1);

    for (int i = 1; i <= k; i++) cin >> a[i];
    for (int i = 1; i <= k; i++) cin >> b[i];

    while (q--)
    {
        ll d; cin >> d;
        int id = lower_bound(a.begin(), a.end(), d) - a.begin();
        if (a[id] == d) cout << b[id] << " ";
        else
        {
            ll up = a[id] - a[id - 1];
            ll dw = b[id] - b[id - 1];
            cout << b[id - 1] + ((d - a[id - 1]) * dw) / up << " ";
        }
    }
    cout<<by;
}
int main()
{
    code by shishirRsiam

    int t; cin >> t;
    while (t--)

        testcase();

    return 0;
}