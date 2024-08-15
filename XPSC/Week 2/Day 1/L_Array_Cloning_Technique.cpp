#include<bits/stdc++.h>
#define str string 
#define ll long long 
#define vec vector<ll> 
#define PB(x) push_back(x)
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;

int solve()
{
    int n; cin>>n;
    vec a(n);
    map<int,int>mp;
    int mx = 0;
    loop(0,i,n) 
    {
        cin>>a[i];
        mp[a[i]]++;
        mx = max(mx, mp[a[i]]);
    }
    if(mx==n) return 0;

    int ans = 1;
    int tmp_mx = mx;
    bool flag = true;
    while(n>tmp_mx)
    {
        if(tmp_mx >= n) break;
        int need = n - tmp_mx;

        if(need>=tmp_mx)
        {
            ans += tmp_mx;
            tmp_mx += tmp_mx;
        }
        else 
        {
            ans += n - tmp_mx;
            return ans;
        }

        if(tmp_mx<n) ans++;

        // if(flag) // for element copy
        // {
        //     ans++;
        //     flag = !flag;
        // }
        // else 
        // {
        //     ans += mx;
        //     tmp_mx += mx;
        // }
        // ans++;
        // tmp_mx ++; ans++;
        // ans++;
        // if(tmp_mx == n) return ans-1;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) cout<<solve()<<"\n";

    return 0;
}