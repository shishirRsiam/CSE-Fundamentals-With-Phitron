#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "\n";
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb push_back
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

    ll n, x; 
    cin >> n >> x;
    vec a(n);
    vector<pi> mp;
    loop(0, i, n)
    {
        cin >> a[i];
        mp.push_back({a[i], i + 1});
    }

    sort(bee(mp));

    for(int i=0;i<n;i++)
    {
        ll need = x - mp[i].first, sum;

        int l = i+1, r = n-1;
        while(l<r)
        {
            sum = mp[l].first + mp[r].first;
            if(sum == need)
            {
                cout<<mp[i].second<<" "<<mp[l].second<<" "<<mp[r].second<<by;
                return 0;
            }
            if(sum > need) r--;
            else l++;
        }
    }
    
    cout << "IMPOSSIBLE" << by;
    return 0;
}