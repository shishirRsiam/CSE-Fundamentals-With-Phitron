#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "\n";
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb push_back
#define bee(x) x.rbegin(), x.rend()
#define pyn cout<<"YES\n":cout<<"NO\n"
#define shishirRsiam cin.tie(NULL);
#define code ios::sync_with_stdio(false);
#define loop(s,i,n) for(int i=s;i<n;i++)
#define print(x) for(auto v:x) cout<<v<<" ";
using namespace std;


/*Time   :   12:18:41
Date  	 :   05-06-2024
Author   :   shishirRsiam
File  	 :   C_Little_Girl_and_Maximum_Sum.cpp*/


bool _solve_koro_taratari__aro_solve_korte_hobe()
{
    ll n,k,l,r; cin>>n>>k;
    vec a(n);
    loop(0,i,n) cin>>a[i];
    vector<ll>diffarance_array(n+2);
    while(k--)
    {
        cin>>l>>r;
        diffarance_array[l]++;
        diffarance_array[r+1]--;
    }
    for(int i=1;i<=n;i++)
        diffarance_array[i] += diffarance_array[i-1];

    sort(bee(a));
    sort(bee(diffarance_array));

    ll ans = 0;
    loop(0,i,n) ans += (a[i]*diffarance_array[i]);
    cout<<ans<<by 
    return true;
}

int main()
{
    code by shishirRsiam

    // int testcase; cin>>testcase; while(testcase--) 

        _solve_koro_taratari__aro_solve_korte_hobe();

    return 0;
}