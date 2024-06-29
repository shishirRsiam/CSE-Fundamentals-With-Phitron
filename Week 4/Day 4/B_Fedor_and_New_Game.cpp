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

    int n,m,k; cin>>n>>m>>k;
    vector<str> allBit;
    m++;

    loop(0,i,m)
    {
        int x; cin>>x;
        str bit; 
        loop(0,k,n) bit += ((x>>k)&1 ? '1' : '0');
        allBit.pb(bit);
    }

    int ans = 0;
    str fedor = allBit.back(); allBit.pop_back();
    for(str s:allBit)
    {
        int cnt = 0;
        loop(0,i,n) if(s[i] != fedor[i]) cnt++;
        if(cnt<=k) ans++;
    }
    cout<<ans<<"\n";
    return 0;
}