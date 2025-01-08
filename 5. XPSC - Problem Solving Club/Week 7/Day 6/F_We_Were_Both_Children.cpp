#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "\n";
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb push_back
#define bee(x) x.begin(), x.end()
#define pyn cout<<"YES\n":cout<<"NO\n"
#define shishirRsiam cin.tie(NULL);
#define code ios::sync_with_stdio(false);
#define loop(s,i,n) for(int i=s;i<n;i++)
#define print(x) for(auto v:x) cout<<v<<" ";
using namespace std;

void testcase()
{
    int n; cin>>n;
    int one = 0;
    map<int,int>mp;
    loop(0,i,n) 
    {
        int x; cin>>x;
        mp[x]++;
    }

    int mx = 0;
    map<int,int>np;
    for(auto x:mp)
    {
        int val = x.first;
        for(int j=val;j<=n;j+=val)
        {
            np[j] += x.second;
            mx = max(mx, np[j]);
        }
    }

    cout<<mx<<by;
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 

        testcase();

    return 0;
}