#include<bits/stdc++.h>
#define ll long long 
#define vec vector<ll> 
#define str string 
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c; cin>>a>>b>>c;

    ll ans = 0;
    for(int i=a;i<c+0.5;i=i+a)
    {
        ans += b;
    }
    cout<<ans<<"\n";
    return 0;
}