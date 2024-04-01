#include<bits/stdc++.h>
#define str string
#define ll long long 
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb(x) push_back(x)
#define bee(x) x.rbegin(), x.rend()
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;

void fun()
{
    int n,m,k; cin>>n>>m>>k;
    vec car(n), power(m);
    loop(0,i,n) cin>>car[i];
    loop(0,i,m) cin>>power[i];
    sort(bee(car));
    sort(bee(power));

    ll ans = 0;
    int i = 0;
    while(i<n and i<m)
    {
        ans += min(power[i]*k, car[i]);
        i++;
    }
    cout<<ans<<"\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) fun();

    return 0;
}