#include <bits/stdc++.h>
#define str string
#define ll long long
#define by "\n"
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
#define print(x)     \
    for (auto v : x) \
        cout << v << " ";
using namespace std;

/*Time   :   00:47:03
Date  	 :   25-06-2024
Author   :   shishirRsiam
File  	 :   B_New_Bakery.cpp*/

bool _solve_koro_taratari__aro_solve_korte_hobe()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll ans = 0;

    if (b < c)
    {
        ll sum = c * (c + 1) / 2 - (b * (b + 1) / 2);
        ll count = c - b;
        if (a < count)
        {
            sum = (2 * c - a + 1) * a / 2;
            a = 0;
        }
        else a -= count;
        ans += sum;
    }

    cout<<ans + (a * b) << by;

    return true;
}

int main()
{
    code shishirRsiam

        int testcase;
    cin >> testcase;
    while (testcase--)
    {
        _solve_koro_taratari__aro_solve_korte_hobe();
    }

    return 0;
}
