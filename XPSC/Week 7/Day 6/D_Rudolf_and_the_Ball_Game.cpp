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
    int n,k,s; cin>>n>>k>>s;

    set<int>ans;
    ans.insert(s);
    while(k--)
    {
        int x; char ch; cin>>x>>ch;
        set<int>temp;
        if(ch == '?' or ch == '0')
        {
            for(auto v:ans)
            {
                v += x;
                if(v > n) v -= n;
                temp.insert(v);
            }
        }
        if(ch == '?' or ch == '1')
        {
            for(auto v:ans)
            {
                v -= x;
                if(v < 1) v += n;
                temp.insert(v);
            }
        }
        ans = temp;
    }
    cout<<ans.size()<<by;
    print(ans);
    cout<<by;
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 

        testcase();

    return 0;
}