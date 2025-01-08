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


/*Time   :   17:29:51
Date  	 :   26-06-2024
Author   :   shishirRsiam
File  	 :   F_Final_Boss.cpp*/


bool _solve_koro_taratari__aro_solve_korte_hobe()
{
    int helth,n; cin>>helth>>n;

    vector<pi>ok(n);
    loop(0,i,n) cin>>ok[i].first;
    loop(0,i,n) cin>>ok[i].second;

    // sort(bee(ok), greater<pi>());

    sort(bee(ok), [&](pi &a, pi &b) {
        return a.first == b.first ? a.second < b.second : a.first > b.first;
    });

    auto binarySearchOnAns = [&](ll mid)
    {
        ll curr = 0, val;
        for(auto x:ok)
        {
            curr += x.first;
            curr += (((mid-1) / x.second) * x.first);
            if(curr >= helth) return true;
        }
        return false;
    };

    ll i = 1, j = 1e11, ans = 0, mid;
    while(i<=j)
    {
        mid = i+(j-i)/2;
        if(binarySearchOnAns(mid))
            ans = mid, j = mid-1;
        else i = mid+1;
    }
    cout<<ans<<by 
    return true;
}

int main()
{
    code by shishirRsiam

    int testcase; cin>>testcase; while(testcase--) 

        _solve_koro_taratari__aro_solve_korte_hobe();

    return 0;
}