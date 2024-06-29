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

    unordered_map<ll,ll>mp;
    loop(0,i,n+1)  mp[i]++;

    ll ans = 0;
    loop(0,i,n+1)
    {
        loop(0,j,n+1)
        {
            int num = k-(i+j);
            if(mp.find(num) != mp.end()) ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}