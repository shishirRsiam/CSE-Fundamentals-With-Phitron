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
    str s; cin>>s;
    vec low, up;
    int n = s.size();
    loop(0,i,n)
    {
        auto &c = s[i];
        if(c != 'B' and c != 'b')
        {
            if(isupper(c)) up.pb(i);
            else low.pb(i);
        }
        else 
        {
            if(isupper(c))
            {
                if(!up.empty())
                {
                    s[up.back()] = ' ';
                    up.pop_back();
                }
            }
            else 
            {
                if(!low.empty())
                {
                    s[low.back()] = ' ';
                    low.pop_back();
                }
            }
            c = ' ';
        }
    }

    string ans;
    for(char c:s)
        if(c != ' ') ans += c;
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