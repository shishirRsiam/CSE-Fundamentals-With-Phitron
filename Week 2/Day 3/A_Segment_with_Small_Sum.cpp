#include<bits/stdc++.h>
#define str string 
#define ll long long 
#define vec vector<ll> 
#define PB(x) push_back(x)
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k; cin>>n>>k;
    vec a(n);
    loop(0,i,n) cin>>a[i];

    int l = 0, r = 0, ans = 0;
    ll sum = 0;
    while(r<n)
    {
        sum += a[r];
        if(sum<=k)
        {
            ans = max(ans, r-l+1);
        }
        else sum -= a[l++];
        r++;
    }
    cout<<ans<<endl;
    return 0;
}