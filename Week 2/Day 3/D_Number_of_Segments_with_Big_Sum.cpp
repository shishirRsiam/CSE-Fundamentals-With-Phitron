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

    ll i = 0, j = 0, sum = 0, ans = 0;
    while(j<n)
    {
        sum += a[j];
        while(sum>=k)
        {
            ans += n - j;
            sum -= a[i++];
        }
        j++;
    }
    cout<<ans<<"\n";
    return 0;
}