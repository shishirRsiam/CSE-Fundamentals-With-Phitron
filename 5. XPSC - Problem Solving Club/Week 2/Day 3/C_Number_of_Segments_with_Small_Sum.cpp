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

    ll n, s; cin>>n>>s;
    vec a(n);
    loop(0,i,n) cin>>a[i];

    int i = 0, j = 0;
    ll sum = 0, ans = 0;

    while(j<n)
    {
        sum += a[j];
        if(sum<=s) ans += j-i+1;
        else 
        {
            while(sum>s) sum -= a[i++];
            ans += j-i+1;
        }
        j++;
    }
    cout<<ans<<"\n";

    return 0;
}