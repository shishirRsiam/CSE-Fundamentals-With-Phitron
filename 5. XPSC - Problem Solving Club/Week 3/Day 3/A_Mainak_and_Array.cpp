#include<bits/stdc++.h>
#define str string
#define ll long long 
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vec a(n);
        loop(0,i,n) cin>>a[i];

        if(n==1) 
        {
            cout<<"0\n";
            continue;
        }

        ll ans = a[n-1] - a[0];
        loop(1,i,n) ans = max(ans, a[i] - a[0]);
        loop(1,i,n) ans = max(ans, a[i-1] - a[i]);
        loop(0,i,n-1) ans = max(ans, a[n-1] - a[i]);
        cout<<ans<<"\n";
    }

    return 0;
}