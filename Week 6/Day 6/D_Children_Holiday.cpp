#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "\n";
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define pyn cout<<"YES\n":cout<<"NO\n"
#define shishirRsiam cin.tie(NULL);
#define code ios::sync_with_stdio(false);
#define loop(s,i,n) for(int i=s;i<n;i++)
#define print(x) for(auto v:x) cout<<v<<" ";
using namespace std;


int main()
{
    code by shishirRsiam

    int m, n;
    cin >> m >> n;
    vector<tuple<int, int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        int t, z, y;
        cin >> t >> z >> y;
        a[i] = make_tuple(t, z, y);
    }

    vec ans(n);
    auto ok = [&](int mid)
    {
        vec may(n);
        int has = m;
        for (int i = 0; i < n; i++)
        {
            tuple<int, int, int> T = a[i];
            int total, ans, remaining, cur;
            int t = get<0>(T), z = get<1>(T), y = get<2>(T);
            total = ((t * z) + y);
            ans = (mid / total);
            remaining = mid % total;
            cur = ((ans * z) + min(z, (remaining / t)));
            cur = min(has, cur);
            has -= cur;
            may[i] = cur;
        }

        if (!has)
        {
            for (int i = 0; i < n; i++)
                ans[i] = may[i];
        }

        return (!has);
    };

    int l = 0, r = 1e8, mid, idx;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            idx = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }

    cout << idx << by;
    for (auto val : ans)
        cout << val << " ";
    cout << by;
    return 0;
}