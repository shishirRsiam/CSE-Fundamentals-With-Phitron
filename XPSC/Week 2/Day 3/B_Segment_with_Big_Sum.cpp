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

    ll sum = 0;
    int i = 0, j = 0, ans = INT_MAX;
    while(j<n)
    {
        sum += a[j];
        while(sum>=s)
        {
            ans = min(ans, j-i+1);
            sum -= a[i++];
        }
        j++; 
    }

    ans == INT_MAX ? cout<<"-1":cout<<ans;

    return 0;
}