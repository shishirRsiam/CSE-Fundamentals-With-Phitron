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
        int n,k; cin>>n>>k;
        map<int,vec>mp;
        loop(0,i,n)
        {
            int x; cin>>x;
            mp[x].pb(i);
        }
        while(k--)
        {
            int a, b; cin>>a>>b;
            if(mp[a].size()==0 or mp[b].size()==0)
            {
                pn;
                continue;
            }
            (mp[a][0]<mp[b].back()) ? py:pn;
        }
    }

    return 0;
}