#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "\n";
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"1"
#define pn cout<<"0"
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
    vec a(1);
    int n; cin>>n>>a[0];
    int mx = a[0];
    str ans = "1";
    bool flag = true;
    loop(1,i,n)
    {
        int x; cin>>x;
        {
            if(!flag)
            {
                if(x < a.back()) ans += '0';
                else
                {
                    if(x > a[0]) ans += '0';
                    else 
                    {
                        ans += '1';
                        a.pb(x);
                    }
                }
            }
            else 
            {
                if(x>=a.back()) 
                {
                    ans += '1';
                    a.pb(x);
                }
                else 
                {
                    if(x<=a[0]) 
                    {
                        flag = false;
                        ans += '1';
                        a.pb(x);
                    }
                    else ans += '0';
                }
            }
        }
    }
    cout<<ans<<"\n";
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 

        testcase();

    return 0;
}