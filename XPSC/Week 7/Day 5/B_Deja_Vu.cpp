#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "\n";
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define pyn cout<<"YES\n":cout<<"NO\n"
#define shishirRsiam cin.tie(NULL);
#define code ios::sync_with_stdio(false);
#define loop(s,i,n) for(int i=s;i<n;i++)
#define print(x) for(auto v:x) cout<<v<<" ";
using namespace std;




void testcase()
{
    int n, k; cin>>n>>k;
    vec a(n), q(1);
    loop(0,i,n) cin>>a[i];
    int x;
    cin>>q[0];
    loop(1,i,k) 
    {
        cin>>x;
        if(q.back() > x) q.pb(x);
    }

    k = q.size();

    loop(0,i,n)
    {
        loop(0,x,k)
        {
            if(a[i]%(1<<q[x])==0)
            {
                q[x]--;
                a[i] += (1<<q[x]);
                q[x]++;
            }
        }
    }

    print(a);
    cout<<"\n";
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 

        testcase();

    return 0;
}