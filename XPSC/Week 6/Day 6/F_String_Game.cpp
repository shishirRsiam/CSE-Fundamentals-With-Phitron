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

    str s, target; cin>>s>>target;
    int n = s.size(), t = target.size();
    vec a(n);
    loop(0, i, n) cin>>a[i];

    auto greedy = [&](ll mid)
    {
        vector<bool> bad(n+1);
        loop(0,i,mid) bad[a[i]-1] = true;

        int subsequence = 0;
        for(int i=0;i<n;i++)
        {
            if(!bad[i] and s[i] == target[subsequence])
                subsequence++;
            if(subsequence == t) return true;
        }
        return false;
    };


    ll i = 0, j = n, mid, ans = 0;
    while(i<=j)
    {
        mid = i + (j-i) / 2;
        if(greedy(mid))
        {
            ans = mid;
            i = mid+1;
        }
        else j = mid-1;
    }
    cout<<ans<<by;
    return 0;
}