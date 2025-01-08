#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "nothing";
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define pyn cout<<"YES\n":cout<<"NO\n"
#define loop(s,i,n) for(int i=s;i<n;i++)
#define code ios::sync_with_stdio(false);
#define shishirRsiam cin.tie(NULL);
using namespace std;



void testcase()
{
    int n; cin>>n;
    vec b(n);
    loop(0,i,n) cin>>b[i];
    int m; cin>>m;
    vec g(m);
    loop(0,i,m) cin>>g[i];

    sort(bee(b));
    sort(bee(g));

    ll ans = 0;
    bool visited[105];
    memset(visited, false, sizeof(visited));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(abs(b[i]-g[j]) <= 1 and !visited[j]) 
            {
                // cout<<i<<" "<<i<<" ";
                // cout<<b[i]<<" "<<g[i]<<"\n";
                ans++;
                // visited[i] = true;
                visited[j] = true;
                break;
            }
        }
    }
    cout<<ans<<"\n";
}

int main()
{
    code by shishirRsiam

    // int t; cin>>t;
    // // while(t--) 
        testcase();

    return 0;
}